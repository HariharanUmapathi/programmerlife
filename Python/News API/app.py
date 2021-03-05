from flask import Flask , jsonify
import requests
from news import getnews
from itzmrevil import HomePage as hp
from itzmrevil import singleArticle as sa

app = Flask(__name__)
app.url_map.strict_slashes = False

@app.route('/')
def index():
    return " Api for Tamil news website- SLATEKUCHI"


@app.route("/Hariharan/<string>")
def page(string):
    #news = getnews(string)
    news =sa(string)

    return news
#Changes Made By Hariharan Umapathi

@app.route("/Hariharan")
def Hariharan():
    return hp("https://slatekuchi.com")


if __name__ == "__main__":
    app.run(debug=True)