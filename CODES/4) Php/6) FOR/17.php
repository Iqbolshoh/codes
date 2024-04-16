<?php
$n = 10;
$S = 0;
echo " n  = " . $n . "<br>" . " 0 ";
for ($i = 1; $i <= $n; $i++) {
    $S += pow($i, 2);
    echo " + " . pow($i, 2);
}
echo " = " . $S;
