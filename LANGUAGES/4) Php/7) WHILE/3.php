<?php
$n = 17;
$k = 5;
$c = 0;
echo " N = " . $n . "<br>";
echo " K = " . $k . "<br>";
echo $n . " / " . $k . " = ";
while ($n >= $k) {
    $n = $n - $k;
    $c++;
}
echo $c . " ( qoldiq = " . $n . " )";
