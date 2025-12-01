<head>
<meta charset='UTF-8' />
<meta name='viewport' content='width=device-width,initial-scale=1.0' />
</head>
<?PHP
header("content-type:text/html,charset:utf-8");
$file=fopen("Thirukural.json","r");
$thirukural=fread($file,filesize("Thirukural.json"));
$thir=json_decode($thirukural);
$thirukural_array=($thir->kural);
$couplet=$thirukural_array[rand(1,1330)];
echo "<div style='color:dodgerblue'>";
echo "<div>".$couplet->Line1."</div>";
echo "<div>".$couplet->Line2."</div>";
echo "</div>";
?>
