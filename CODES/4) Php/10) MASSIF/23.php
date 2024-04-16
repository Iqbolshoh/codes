<?php
$n = 10;
$K = 5;
$L = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
for ($i = 0; $i < $K; $i++) {
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    $S += $a[$i];
    $c++;
}
echo "<br>";
for ($i = $L + 1; $i < $n; $i++) {
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    $S += $a[$i];
    $c++;
}
echo " O'rta arifmetigi = " . $S / $c;
