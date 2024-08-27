from fastapi import FastAPI
import requests

app = FastAPI()
@app.get("/hello-world")
def hello_world(): 
    return "Hello world"
@app.get("/epizy-data-download")
def external_api_call():
    api_url = r'http://hariharan.epizy.com/api/'
    try: 
        response = requests.get(api_url)
        print(response)
        return response
    except requests.exceptions.RequestException as e:
        print("Server Error",e
        
        )
        return "Service Down Unable to connect the epizy service"
    

