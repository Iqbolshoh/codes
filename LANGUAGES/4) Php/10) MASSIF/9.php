<?php
$n = 7;
for ($i = $n - 1; $i >= 0; $i--) {
    $a[$i] = rand() % 100;
    if ($i % 2 == 0) {
        echo "A[" . $i  . "] = " . $a[$i] . "<br>";
        $c++;
    }
}
echo " Juftlar soni = " . $c;
