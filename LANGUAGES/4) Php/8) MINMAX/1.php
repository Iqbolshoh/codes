<?php
$n = 10;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
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
echo " max: " . $max . " <br>";
echo " min: " . $min . " <br>";
