<?PHP 
if(isset($_SERVER["HTTP_ORIGIN"])){
header("Access-Control-Allow-Origin:{$_SERVER["HTTP_ORIGIN"]}");
header("Access-Control-Allow-Credentials:true");
header("Access-Control-Max-Age:864000");

}

header("Access-Control-Allow-Methods:GET,PUT,POST,OPTIONS,PATCH,DELETE");
header("Access-Control-Allow-Headers:x-requested-with,content-type,Authorization");
echo $_SERVER["HTTP_ORIGIN"];
?>