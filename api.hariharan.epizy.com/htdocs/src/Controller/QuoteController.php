<?PHP 
class QuoteController extends Controller
{
    function __construct()
    {
        
    }
    function create(){
        //var_dump($_POST);
        if($this->validate($_POST))
        {
        $stmt=$GLOBALS["db"]->prepare("INSERT INTO quotes set mobile=:mobile,name=:name,query=:query,service=:service,status=\"Proposed\"");
        $stmt->execute($_POST);
        http_response_code(200);
        return "Query Submitted Successfully";
    }
        http_response_code(206);
        return "Quotation Submission Failed Incomplete Details";
    }

    function validate($array){
        if(
            isset($array["mobile"]) && !empty($array["mobile"]) &&
            isset($array["name"])   && !empty($array["name"])  &&
            isset($array["query"])  && !empty($array["query"])  &&
            isset($array["service"]) &&!empty($array["service"]) ){    
            return true;
        }
        return false;
    }
}
