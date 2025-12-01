<?PHP 
require_once "../src/Model/Service.php";

class ServiceController extends Controller
{
    

    function __construct(){

    }
    function index(){
        $res=new Response($this->findAll());
        return $res;
    }
    function findAll(){
        $stmt=$GLOBALS["db"]->prepare("SELECT * from services");
        $stmt->execute();
        return $stmt->fetchAll(PDO::FETCH_CLASS,"Service");
    }
}