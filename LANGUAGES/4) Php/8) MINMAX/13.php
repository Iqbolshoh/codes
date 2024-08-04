<?php
$n = 7;
$num1 = 1;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    echo "A" . $i  . " = " . $a  . " <br>";
    if ($i == 1 and $a % 2 == 1) {
        $toq = $a;
    }
    if ($toq < $a and $num1 == 1 and $a % 2 == 1) {
        $num1 = $i;
    }
}
echo " birinchi uchragan eng katta toq son raqami: " . $num1 . " <br>";
