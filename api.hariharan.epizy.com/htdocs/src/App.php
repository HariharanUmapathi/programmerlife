<?PHP //APP 
class App
{
	private $baseController;
	private $baseMethod;
	private $methodArgs;
	
	function __construct(){
			require_once "../src/cors.php";
			require_once "../src/database.php";
			require_once "../src/framework.php";
			require_once "../src/Routes.php";
			require_once "../src/Route.php";
			require_once "../src/Router.php";
			require_once "../src/Controller/Controller.php";
			$router=new Router();
			//$request->parse();
			try{
				$request=$router->match();
			}
			catch(Exception $e){
				echo $e->getMessage();
				//exit();
			}

			$this->baseController=isset($request->controller)?$request->controller:"Controller";
			
			$this->baseMethod=isset($request->method)?$request->method:"index";
			$this->methodArgs=isset($request->args)?$request->args:null;
			$this->load_controller($this->baseController);
			//echo $request;
			//var_dump($this);
			
	}
	function load_controller($controller)
	{
		$controller_path ="../src/Controller/{$controller}.php";		
		//echo $controller;
	require_once $controller_path;
	$this->ControllerObj=new $controller();
	}
	function run(){
		
		return $this->ControllerObj->{$this->baseMethod}();
	}
}
?>