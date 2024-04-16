<?php
$n = 88;
$k = 1;
echo " n = " . $n . " <br>";
while (pow(3, $k) <= $n) {
    $k++;
}
echo  " 3 ^ " . $k . " > " . $n;
