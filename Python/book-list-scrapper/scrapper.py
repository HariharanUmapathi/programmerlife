from bs4 import BeautifulSoup as bs
from lxml import html
import requests
import tamil 
import csv,json
import io 

def write_to_file():
    scrapped=open("book_meta.csv","wb")
    scrapped.write(str(data).encode('utf-8'))
    line = "\n"
    scrapped.write(line.encode('utf-8'))
    scrapped.close()

def write_to_csv(meta_list):
    with open("book_meta.csv","wb") as book_meta:
        i=1
        for row in meta_list:
            book_title = row.xpath("td[2]/text()")
            author = row.xpath("td[3]/text()")
            genre = row.xpath("td[4]/text()") 
            book_meta.write(str(i).encode('utf-8'))
            book_meta.write(str(",").encode('utf-8'))
            try:
                book_meta.write(str(book_title[0]).encode('utf-8'))
            except IndexError:
                book_meta.write(str("").encode('utf-8'))
            book_meta.write(str(",").encode('utf-8'))
            try : 
                book_meta.write(str(author[0]).encode('utf-8'))
            except IndexError:
                book_meta.write(str("").encode('utf-8'))
            book_meta.write(str(",").encode('utf-8'))
            try : 
                book_meta.write(str(genre[0]).encode('utf-8'))
            except IndexError:
                book_meta.write(str("").encode("utf-8"))
            book_meta.write(str("\n").encode('utf-8'))
            i=i+1
    print("Meta list exported into csv file!")

url = "https://www.projectmadurai.org/pmworks.html"
html_page = requests.get(url)

tree = html.fromstring(html_page.content)

#table = tree.xpath("""//*[@id="sortabletable"]""")
tr= tree.xpath("""//*[@id="sortabletable"]/tbody/tr""")
# Meta List trs collected here 
#for row in tr:
write_to_csv(tr)
    
    
# Aggregating the contents using the list 
#book_titles = table[0].xpath("//td[position()=1]/text()")
#authors = table[0].xpath("//td[position()=2]/text()")
#genres = table[0].xpath("//td[position()=3]/text()")
#print(max(len(book_titles),len(authors),len(genres)),len(book_titles),len(authors),len(genres))
#exit()

""" data_list=[]
for i in range(0,len(book_titles)-2):
    data_dictionary = {}
    data_dictionary["title"]=book_titles[i] 
    data_dictionary["author"]=authors[i]
    data_dictionary["genre"]=genres[i]
    data_list.append(data_dictionary)
    print(i)

with open("book_meta.json","w") as book_meta_json:
    book_meta_json.write(json.dumps(data_list))
 """
#for data in tree.xpath("//td[position()=2]/text()"):
    
    

#soup= bs(,'html.parser')
#table= soup.find_all('table')
#i=0
#for row in table[1].children:
#    try:
#        for row_lvl_2 in row.children:
#            i=i+1
#    except TypeError:
#        print('error')