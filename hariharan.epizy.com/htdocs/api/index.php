<?php
//require "dbms.php";
$request = $_SERVER['REQUEST_URI'];
switch ($request) {
    case '/' :
        require 'views/index.php';
        break;
    case '' :
        require 'views/index.php';
        break;
    case '/about' :
        require 'views/about.php';
        break;
    default:
        http_response_code(404);
        require 'views/404.php';
        break;
}

header("Access-Control-Allow-Origin: *");
if(isset($_REQUEST['format'])) {
switch($_REQUEST['format']){
    case "json":
    header("content-type:application/json");
    $array = ["JSON"=>"Test"];
    echo json_encode($array);
    break;
    case "xml":
    header("content-type:application/xml");
    echo  '<?xml version="1.0" encoding="UTF-8" ?>';
    break;
    case "html":
    header("content-type:text/html");
    echo "<html><head></head><body>HTML Test</body></html>";
    break;
    default:
    echo "SCRIPT";
}
exit("");
}



    echo '<script>

fetch("http://hariharan.epizy.com/index.php?format=json",{ mode:"no-cors"}	)
.then((res)=> res.json())
.then(response => console.log(response)).catch(err=>{console.log(err)})

fetch("http://hariharan.epizy.com/index.php?format=xml",{ mode:"no-cors"}	)
.then((res)=> res.text())
.then(response => console.log(XMLDocument(response))).catch(err=>{console.log(err)})
</script>';
?>

<html>
	<head>
		<title>Hello, This is Hariharan</title>
	</head>
<body>
<h1>Hellow This is Hariharan</h1>

</body>
</html>