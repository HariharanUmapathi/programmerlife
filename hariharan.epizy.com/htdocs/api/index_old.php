<?PHP

/* require_once "src/Fernet.php";
require_once "src/InvalidTokenException.php";
use Fernet\Fernet;
use Fernet\InvalidTokenException;
try{
$key=Fernet::generateKey();

$fernet = new Fernet($key); // or new FernetMsgpack($key);

$token = $fernet->encode('string message');
echo $token;
}catch(Exception $e){
    echo $e->message;
} */

if(isset($_REQUEST['gettoken'])){
/*  */
echo "fernet_token";
exit();
}









file_put_contents("php.log","Page opened");
//Db List
echo random_bytes(32);


$db_list=[
"epiz_26103512_Colleges",	
"epiz_26103512_Drivers",	
"epiz_26103512_blackpearl",	
"epiz_26103512_crmsoft",	
"epiz_26103512_epizy",	
"epiz_26103512_lib_mgmt"];

if(isset($_REQUEST['dbaccess'],$_REQUEST['token'],$_REQUEST['payload'])){
try{

$host="sql313.epizy.com";
$user="epiz_26103512";
$pass="5ggrP8MAVC";
$dbname="epiz_26103512_blackpearl";

$db=new mysqli($host,$user,$pass,$dbname);
$query="show tables";
$res=$db->query($query);
if($res->num_rows>0){
while($row=$res->fetch_assoc()){
echo $row["Tables_in_".$dbname];
}

}
}
catch(Exception $e){
header("location:index.php",true,500);
}

//Decryption process

}
else {
    header("location:resume.html");
}


?>