<?php
$n = 7;
$k = 3;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    $a[$i] *= $a[$k];
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
