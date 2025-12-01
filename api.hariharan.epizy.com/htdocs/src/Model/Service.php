<?PHP
class Service extends Model
{
    public $id;
    public $name;
    public $description;
    public $status;
    public $created_at;
    public $updated_at;

    function __construct()
    {
        $this->description = explode(";", $this->description);
    }
    function equals(Service $p, Service $q)
    {
        return;
    }
}
