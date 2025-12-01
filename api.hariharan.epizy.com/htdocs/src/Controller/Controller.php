<?PHP 
//Default controller
class Controller
{
function __contruct(){
	
}
function index(){
	return "data";
}
function json($data){
	header("Content-type:application/json");
	return json_encode($data);
}
}

?>