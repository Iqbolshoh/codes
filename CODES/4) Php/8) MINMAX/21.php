<?php
$n = 4;
$S = 0;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    $S += $a;
    echo "A" . $i . " = " . $a . " <br>";
    if ($i == 1) {
        $max = $a;
        $min = $a;
    }
    if ($max < $a) {
        $max = $a;
    }
    if ($min > $a) {
        $min = $a;
    }
}
echo " O'rtacha qiymat : " . ($S - $max - $min) / ($n - 2) . " <br>";
