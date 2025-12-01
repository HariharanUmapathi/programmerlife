<?PHP 
use Firebase\JWT;
use Firebase\JWK;
require_once "../src/Model/User.php";
//JWT

class UserController extends Controller
{

function __construct()
{
	
}
function auth(){
	$_POST["email"]=filter_var($_POST["email"]);
	return $this->findUserByMail();
}
function findUserByMail()
{
$stmt=$GLOBALS["db"]->prepare("SELECT * from users where email =? and password=?");
$stmt->bindValue(1,$_POST["email"]);
$stmt->bindValue(2,$_POST["pass"]);
$stmt->execute();
$user=new User();
$user->instantiate($stmt->fetch(PDO::FETCH_ASSOC));
return $user;
}
function test(){
	$_POST["email"]="smarthariharan28@gmail.com";
	$_POST["pass"]="hai hai hai hhai";
	$user=$this->findUserByMail();
	$user->session_token();
	var_dump($user);
}
}