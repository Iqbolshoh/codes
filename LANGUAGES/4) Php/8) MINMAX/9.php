<?php
$n = 7;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    echo "A" . $i . " = " . $a  . " <br>";
    if ($i == 1) {
        $max1 = $a;
        $max2 = $a;
        $num1 = 1;
        $num2 = 1;
    }
    if ($max1 < $a and $num1 == 1) {
        $num1 = $i;
    }
    if ($max2 < $a) {
        $max2 = $a;
        $num2 = $i;
    }
}
echo " birinchi max1 raqami: " . $num1 . " <br>";
echo " oxirgi max2 raqami: " . $num2 . " <br>";
