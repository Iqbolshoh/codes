<?php
$n = 121;
echo " N = " . $n . "<br>";
$yuz = intval($n / 100);
$bir = $n % 10;
$l = ($yuz == $bir);
if ($l) {
    echo "True";
} else {
    echo "False";
}

