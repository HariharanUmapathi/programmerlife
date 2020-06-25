var driverlist=[];
class driver
{
constructor(v1,v2,v3)
{
this.name=v1;
this.mobile=v2;
this.exp=v3;	
this.id=driverlist.length-(-1);
}	
}	
function drivercard(ob)
{
var div=$("<div></div>");
div.addClass("dc");
div.attr("id",ob.id);
div.append("<p style='background-color:Dodgerblue'>DRIVER PROFILE</p>");
var img=$("<img></img>");
img.addClass("dicon");
img.attr("src","images/dicon.png");
img.attr("style","width:50px;height:50px;float:right");
div.append(img);
div.append("Name:"+ob.name+"</br>");
div.append("Mobile"+ob.mobile);
div.append("</br>Rating:"+ob.exp);
var book=$("<button></button>");
book.append("Book");
book.addClass("dbtn");
book.attr("onclick","bookfn()");
div.append(book);	
$("#sp1").append(div);
}


driverlist.push(new driver("Sriram","+91 88276-29227","5000 Km"));
driverlist.push(new driver("Ramu","+91 88276-52767","6000Km"));
driverlist.push(new driver("Ragavan","+91 88527-92927","9870 Km"));