<?PHP

use Firebase\JWT\JWT;

class User extends Model
{
    public $id;
    public $name;
    public $mobile;
    public $email;
    public $role;
    private $password;
    public $token;
    private $created_at;
    private $updated_at;
    function __construct()
    {

    }
    function create($name, $mobile, $password, $role, $email)
    {
        $stmt = $this->db->prepare("INSERT INTO users set name=?,mobile=?,password=?,role=\"student\",email=?");

        $stmt->execute([
            0 => "Hariharan",
            1 => "+918807290807",
            2 => "Hariaruna",
            3 => "student",
            4 => "smarthariharan28@gmail.com"
        ]);
    }
    function __toString()
    {
        return json_encode($this);
    }
    function instantiate($pdoarray)
    {
        foreach ($pdoarray as $key => $value) {
            $this->{$key} = $value;
        }
        return $this;
    }
    function isInit(){
        return $this->id!=null;
    }
    function session_token(){
        //Check User Object is initiated
        if($this->isInit())
        //Remove Expired Sessions
        {
            $stmt=$GLOBALS["db"]->prepare("delete * from session where expire_at< CURRENT_TIMESTAMP");
            $stmt->execute();
        }
        //Create Token
        $payload=["iss"=>"http://127.0.0.6","aud"=>"http://","iat"=>time(),"nbf"=>$_SERVER["REQUEST_TIME"]];
        print_r($payload);
        echo JWT::encode($payload,"key");
        setCookie("X-Authentication",$this->token,time()+2000);
        var_dump($_COOKIE);
    }
}
