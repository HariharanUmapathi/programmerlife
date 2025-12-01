<?PHP

class Model
{
	function __construct()
	{
	}
}

class Request
{
	private $parsed;
	private $isApi;
	public $controller;
	public function __construct($controller = null, $method = null, $args = null)
	{
		$this->parsed = [];
		$this->requestMethod = $_SERVER["REQUEST_METHOD"];
		$this->controller = $controller;
		$this->method = $method;
		$this->$args = $args;
	}
	public function map()
	{
	}
	public  function  parse()
	{
		$this->parsed = explode("/", $_SERVER["REQUEST_URI"]);
		$this->isApi = (isset($this->parsed[1]) && $this->parsed[1] == "api") ? true : false;
		switch (count($this->parsed)) {
			case 1:
				//HOme route;
				break;
			case 2:
				//Api Root
				if (!$this->isApi)
					$this->controller = $this->parsed[0];

				break;
			case 3:
				//Api
				break;
			case 4:

			default:
				break;
		}




		return $this;
	}
	function __toString()
	{
		$log = "</br>Path:{$_SERVER["REQUEST_URI"]}</br>"
			. "Method:{$_SERVER["REQUEST_METHOD"]}</br>Parsed URI</br>";
		switch (count($this->parsed)) {
			case 1:
				$log .= "</br>Level 1 Root Path</br>";
				break;
			case 2:
				$log .= "</br>Level 2 Normal Request Or ApI Root</br>";
				break;
			case 3:
				$log .= "</br>Level 3 Normal Controller method or API Controller default method</br>";
				break;
			case 4:
				$log .= "</br>Level 4 Normal Controller With Action  or API Controller method</br>";
				break;
			case 5:
				$log .= "</br>Level 5 Normal Controller with Action 2 or Api Controller method with action</br>";
				break;
			default;
		}
		foreach ($this->parsed as $key => $value)
			$log .= "{$key}:{$value}</br>";
		return $log;
	}
}

class Response
{
	private $responseCode;
	private $response;
	function __construct($response, $responseCode = 200, $header = "Content-type:text/html")
	{
		$this->responseCode = http_response_code($responseCode);
		header($header);
		$this->response = $response;
		return $this;
	}

	function __toString()
	{

		if (is_string($this->response))
			return $this->response;

		if (is_array($this->response) || is_object($this->response)) {
			header("Content-type:application/json");
			return json_encode($this->response);
		}
		return is_bool($this->response) ? (($this->response === (bool)1) ? "True" : "False") : "False";
	}
}
