<?PHP 
try{
    require_once "../src/App.php";
    require_once "../vendor/autoload.php";
    $app=new App();
    echo $app->run();
}
catch(Exception $e){
    $fhandle=fopen("Error.txt","w");
    fwrite($fhandle,$e->getMessage()."  ".date("d-m-y h:m:s",time()));
    fclose($fhandle);
}
?>