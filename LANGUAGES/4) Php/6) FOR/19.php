<?php
$n = 5;
$k = 1;
echo " n  = " . $n . "<br>" . " 1 ";
for ($i = 2; $i <= $n; $i++) {
    $k *= $i;
    echo " * " . $i;
}
echo " = " . $k;
