#!/bin/bash

set -e

echo "Updating packages..."
sudo apt update

echo "Installing dependencies..."
sudo apt install -y curl libnss3-tools apache2

echo "Installing mkcert..."

if ! command -v mkcert &> /dev/null
then
    curl -JLO "https://dl.filippo.io/mkcert/latest?for=linux/amd64"
    chmod +x mkcert-v*-linux-amd64
    sudo mv mkcert-v*-linux-amd64 /usr/local/bin/mkcert
fi

echo "Installing local CA..."
mkcert -install

echo "Creating SSL directory..."
sudo mkdir -p /etc/apache2/ssl

cd /etc/apache2/ssl

echo "Generating localhost certificate..."
sudo mkcert localhost 127.0.0.1 ::1

echo "Enabling Apache SSL module..."
sudo a2enmod ssl

echo "Creating Apache SSL virtual host..."

sudo bash -c 'cat > /etc/apache2/sites-available/localhost-ssl.conf <<EOF
<VirtualHost *:443>

    ServerName localhost
    DocumentRoot /var/www/html

    SSLEngine on

    SSLCertificateFile /etc/apache2/ssl/localhost+2.pem
    SSLCertificateKeyFile /etc/apache2/ssl/localhost+2-key.pem

    <Directory /var/www/html>
        AllowOverride All
        Require all granted
    </Directory>

    ErrorLog \${APACHE_LOG_DIR}/localhost_ssl_error.log
    CustomLog \${APACHE_LOG_DIR}/localhost_ssl_access.log combined

</VirtualHost>
EOF'

echo "Enabling SSL site..."
sudo a2ensite localhost-ssl.conf

echo "Restarting Apache..."
sudo systemctl restart apache2

echo ""
echo "======================================="
echo "HTTPS localhost setup completed"
echo "Open:"
echo "https://localhost"
echo "======================================="
