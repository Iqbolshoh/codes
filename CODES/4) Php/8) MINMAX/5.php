<?php
$n = 10;
for ($i = 1; $i <= $n; $i++) {
    $v = rand() % 100;
    $m = rand() % 100;
    echo "v" . $i . " = " . $v . "_____m" . $i . " = " . $m . " <br>";
    if ($i == 1) {
        $min = $v;
        $max = $m;
    }
    if ($min > $v) {
        $min = $v;
    }
    if ($max < $m) {
        $max = $m;
    }
}
echo " v = " . $min . " <br>";
echo " m = " . $max . " <br>";
echo " Eng katta zichlik : " . $max . " / " . $min . " = " . $max / $min;
