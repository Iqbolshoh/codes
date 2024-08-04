<?php
$n = 32;
$k = 0;
echo $n;
while ($n > 1) {
    $n /= 2;
    $k++;
}
echo " = " . " 2 ^ " . $k;
