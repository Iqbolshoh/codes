<?php
$n = 10;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    $b = rand() % 100;
    echo "A" . $i . " = " . $a . "_____B" . $i . " = " . $b . " <br>";
    if ($i == 1) {
        $max1 = $a;
        $max2 = $b;
    }
    if ($max1 < $a) {
        $max1 = $a;
    }
    if ($max2 < $b) {
        $max2 = $b;
    }
}
echo " max1: " . $max1 . " <br>";
echo " max2: " . $max2 . " <br>";
