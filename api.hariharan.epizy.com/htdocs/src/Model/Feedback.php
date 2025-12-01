<?PHP 

//Feedback Model 

class Feedback extends Model
{
	public $id;
	public $name;
	public $feedback;
	public $created_at;
	public $updated_at;
	public $stars;
	private $db;
	private $user_id;
	
	function __construct($id=null,$username=null,$feedback=null,$created_at=null,$updated_at=null,$stars=null){
		$this->db=$GLOBALS["db"];
		if(is_array($id)){
			foreach($id as $key=> $value){
				$this->{$key}=$value;
			}
		}
		else if(is_int($id)){
		$this->id=$id;
		$this->username=$username;
		$this->created_at=$created_at;
		$this->updated_at=$updated_at;
		$this->stars=$stars;
		}
	}
	function __get($variable){
		return $this->{$variable};
	}
	
}