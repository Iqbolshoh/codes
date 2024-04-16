<?php
$n = 3;
$a = 1.1;
$S = 0;
echo " n  = " . $n . "<br>";
for ($i = 0; $i < $n; $i++) {
    $S += $a * pow(-1, $i);
    $a += 0.1;
}
echo " S  = " . $S;
