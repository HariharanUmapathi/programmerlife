//Action
var db={};
var http=new XMLHttpRequest();
var len=[];
http.open('GET',"https://raw.githubusercontent.com/itz-mr-evil/programmerlife2/master/driverdata.json",true);
http.onload=function ()
{
console.log("Loading...");
if(this.status===200)
{
db=JSON.parse(this.responseText);	
len=Object.entries(db);
}	
}
http.send();




window.onload=()=>
{
$("#sp1").hide();
$("#sp2").hide();
$("#sp3").hide();
$("#sp4").hide();

}

function fn1()
{
$("#sp1").show();
$("#sp2").hide();
$("#sp3").hide();
$("#sp4").hide();

var i;
for(i=0;i<len;i++)
{
driverlist.push(len[i][1]);
console.log("ud");
}
for(i=0;i<driverlist.length;i++)
drivercard(driverlist[i]);	
}
function fn2()
{
$("#sp1").hide();
$("#sp2").show();
$("#sp3").hide();
$("#sp4").hide();	
}
function fn3()
{
$("#sp1").hide();
$("#sp2").hide();
$("#sp3").show();
$("#sp4").hide();	
}

function fn4()
{
$("#sp1").hide();
$("#sp2").hide();
$("#sp3").hide();
$("#sp4").show();	
}

function login(v1,v2)
{
console.log(v1);
console.log(v2);
}