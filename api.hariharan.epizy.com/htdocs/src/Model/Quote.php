<?PHP

class Quote extends Model
{
    private $id;
    private $mobile;
    private $name;
    private $query;
    private $service;
    private $status;
    private $created_at;

    function __construct($id,$mobile,$name,$query,$service,$status,$created_at)
    {
        $this->id=$id;
        $this->mobile=$mobile;
        $this->name=$name;
        $this->query=$query;
        $this->status=$status;
        $this->service=$this->service;
        $this->created_at=$created_at;
    }

    function equals(Quote $p, Quote $q): bool
    {
        return

            $p->mobile == $q->mobile &&
            $p->name == $q->name &&
            $p->service == $q->service &&
            $p->query == $q->query


            ? true : false;
    }
}
