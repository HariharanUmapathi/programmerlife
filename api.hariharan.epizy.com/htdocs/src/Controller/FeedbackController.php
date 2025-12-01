<?PHP 
require_once "../src/Model/Feedback.php";
class FeedbackController extends Controller {
	function __construct(){
		$this->db=$GLOBALS["db"];
	}
	function index(){
		return $this->findAll(); 
	}
	function findById($id)
	{
		$stmt=$this->db->prepare("SELECT feedbacks.id,feedback,stars,feedbacks.created_at,feedbacks.updated_at from feedbacks left join users on users.id=feedbacks.user_id where feedback.id=?");
		$stmt->bindValue($id);
		$stmt->execute();
		return $stmt->fetch(PDO::FETCH_CLASS,'Feedback');
	}
	function findAll(){
		$stmt=$this->db->prepare('SELECT feedbacks.id,feedback,stars,feedbacks.created_at,feedbacks.updated_at,users.name from feedbacks left join users on users.id=feedbacks.user_id');
		$stmt->execute();
		$feedbacks=$stmt->fetchAll(PDO::FETCH_CLASS,"Feedback");
		//var_dump($feedbacks);
		
		return $this->json(["feedbacks"=>$feedbacks,"limit"=>"5"]);
	}
	
	
}
?>