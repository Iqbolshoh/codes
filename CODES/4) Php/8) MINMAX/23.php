<?php
$n = 7;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    echo "A" . $i . " = " . $a . " <br>";
    if ($i == 1) {
        $max1 = $a;
        $max2 = $a;
    }
    if ($a > $max1) {
        $max2 = $max1;
        $max1 = $a;
    } elseif ($a > $max2) {
        $max2 = $a;
    }
}
echo " MAX1: " . $max1 . " <br>";
echo " MAX2: " . $max2 . " <br>";
