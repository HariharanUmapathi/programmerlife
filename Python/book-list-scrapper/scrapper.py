from bs4 import BeautifulSoup as bs
from lxml import html
import requests
import tamil 

url = "https://www.projectmadurai.org/pmworks.html"
html_page = requests.get(url)

#soup= bs(,'html.parser')
tree = html.fromstring(html_page.content)
scrapped=open("book_meta.csv","wb")
for data in tree.xpath("//td[position()=2]/text()"):
    scrapped.write(str(data).encode('utf-8'))
    line = "\n"
    scrapped.write(line.encode('utf-8'))
scrapped.close()

#table= soup.find_all('table')
#i=0
#for row in table[1].children:
#    try:
#        for row_lvl_2 in row.children:
            
            
#            i=i+1
#    except TypeError:
#        print('error')