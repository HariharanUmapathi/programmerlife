<?PHP 

class DashboardController extends Controller
{
    function __construct()
    {
        
    }
    function index(){
    //Get Customer Data
    $data=[];
    $stmt=$GLOBALS["db"]->prepare("SELECT count(*) as customers from customers");
    $stmt->execute();
    $data["customers"]=(int)$stmt->fetch(PDO::FETCH_ASSOC)["customers"];
    $stmt=$GLOBALS["db"]->prepare("SELECT count(*) as services from services");
    $stmt->execute();
    $data["services"]=(int)$stmt->fetch(PDO::FETCH_ASSOC)["services"];
    $stmt=$GLOBALS["db"]->prepare("SELECT count(*) as offers from offers");
    $stmt->execute();
    $data["offers"]=(int)$stmt->fetch(PDO::FETCH_ASSOC)["offers"];
    $stmt=$GLOBALS["db"]->prepare("SELECT count(*) as feedbacks from feedbacks");
    $stmt->execute();
    $data["feedbacks"]=(int)$stmt->fetch(PDO::FETCH_ASSOC)["feedbacks"];
    return new Response($data);
    }
}


?>