import os
from bs4 import BeautifulSoup as bs


url="https://slatekuchi.com"
#Get /<string>
def singleArticle(article):
    command="curl "+url+"/"+article+"/ > temp.html"
    print("curl "+url+"/"+article+"/ > temp.html")
    #os.system("curl "+url+"/"+article+" > temp.html")
    text=open("temp.html","rb")
    soup=bs(text,'lxml')
    
    data={"article":str(soup.article)}
    text.close()
    return data
    
#Get /    
def HomePage(url):
    #featured Posts
    print(url)
    #os.system("curl "+url+" > temp.html")
    text=open("temp.html","rb").read().decode('utf-8')
    soup=bs(text,"html.parser")
    try:
        print("Main Content")
        data=[]
        f_slides=soup.find_all("div",class_='single-slide')
        for slide in f_slides:
            temp={}
            temp["img-src"]=slide.figure.a.img.get("src")
            temp["img-title"]=slide.figure.a.img.get("title")
            temp["news-link"]=slide.figure.a.get('href')
            data.append(temp)
    except TypeError:
        text.close()
        return False

    text.close()
    return str({"data":data,"Images":len(soup.find_all("img")),"Links":len(soup.find_all("a")),"headlines":len(f_slides)}).encode('utf-8')