<?php
$n = 15;
$k = 3;
for ($i = 0; $i < $n; $i += $k) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
