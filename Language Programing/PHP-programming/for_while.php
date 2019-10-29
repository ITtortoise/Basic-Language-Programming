<?php
$a=12;

echo "even numbers:"."<br>";
for($i=2;$i<=12;$i++)
{
	if($i%2==0)
		echo $i."<br>";
}

echo "odd numbers:"."<br>";
$b=1;
while($b<=$a)
{
	if($b%2!=0)
		echo $b."<br>";
	$b++;
}

?>