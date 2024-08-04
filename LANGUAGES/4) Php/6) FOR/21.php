<?php
$n = 3;
$k = 1;
$S = 0;
echo " n  = " . $n . "<br> 1 ";
for ($i = 1; $i <= $n; $i++) {
    $S += 1 / $k;
    echo " + 1/( " . $k . " ) ";
    $k *= $i;
}
echo " = " . $S;
