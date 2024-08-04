<?php
$n = 2;
$S = 0;
for ($i = 0; $i <= $n; $i++) {
    echo " (" . $i . " + " . $n . ")^2 + ";
    $S += pow($i + $n, 2);
}
echo " 0  = " . $S;
