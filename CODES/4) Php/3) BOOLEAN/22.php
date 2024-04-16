<?php
$n = 432;
echo " N = " . $n . "<br>";
$yuz = intval($n / 100);
$on = intval($n / 10) % 10;
$bir = $n % 10;
$l = ($yuz < $on and $on < $bir or $yuz > $on and $on > $bir);
if ($l) {
    echo "True";
} else {
    echo "False";
}
