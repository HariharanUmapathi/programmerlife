<?PHP
require "dbms.php";
$cgpa=new dbSlave("localhost","root","","cgpadb");
header("content-type:text/javascript");
$cgpa->query("SHOW TABLES");
echo json_encode($cgpa->recordsArray());
exit();
if(isset($_GET["getcolleges"]))
{
$cgpa->query("SELECT * FROM `colleges` LIMIT 0,26");
echo "var colleges=".$cgpa->recordsArray();
exit(0);	
}
if(isset($_GET,$_GET["clg"],$_GET["getCourses"]))
{

$sql=SPRINTF("select name from courses where id in 
(select course_id from co where college_id in 
(select id from colleges where name=\"%s\"))",$_GET["clg"]);
$re=$cgpa->query($sql);
echo $cgpa->recordsArray();
}
//Getting Papaers Data
if(isset($_GET,$_GET["clg"],$_GET["course"])){
$sql=SPRINTF("select * from papers where course_id=(select id from courses where name=\"%s\") and college_id=(select id from colleges where name=\"%s\")",$_GET["course"],$_GET["clg"]);
//echo $sql;
$cgpa->query($sql);
echo echo "var area=".$cgpa->recordsArray();
}

?>