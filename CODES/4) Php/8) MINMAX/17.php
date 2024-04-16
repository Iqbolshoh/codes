<?php
$n = 10;
for ($i = 1; $i <= $n; $i++) {
    $a = rand() % 100;
    echo "A" . $i . " = " . $a  . " <br>";
    if ($i == 1) {
        $max = $a;
        $num = 1;
    }
    if ($max < $a) {
        $max = $a;
        $num = $i;
    }
}
echo " oxirgi max raqami dan keyingi sonlar: " . ($n - $num)  . " <br>";
