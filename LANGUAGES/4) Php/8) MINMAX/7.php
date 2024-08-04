<?php
$n = 10;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    echo "A" . $i . " = " . $a  . " <br>";
    if ($i == 1) {
        $max = $a;
        $min = $a;
        $num1 = 1;
        $num2 = 1;
    }
    if ($max < $a and $num1 == 1) {
        $num1 = $i;
    }
    if ($min > $a) {
        $min = $a;
        $num2 = $i;
    }
}
echo " birinchi max raqami: " . $num1 . " <br>";
echo " oxirgi min raqami: " . $num2 . " <br>";
