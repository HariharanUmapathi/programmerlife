<?PHP 
class Router extends Route
{
	private $routes;
	function __construct(){
	
	}
	
	function match(){
		$result=array_filter($GLOBALS["routes"],function ($route){
			if($route[0]==$_SERVER["REQUEST_METHOD"] && preg_match("#{$route[1]}#",$_SERVER["REQUEST_URI"])){
				return $route;
			}
		});
		//var_dump($result);
		$result=array_values($result);
		if(count($result)!=0)
		{
			$result[0][3]=isset($result[0][3])?$result[0][3]:null;
			return new Request($result[0][2],$result[0][3]);
		}
			
		else 
			throw new Exception("Route Not Found {$_SERVER["REQUEST_URI"]}");
		}
		
}

?>