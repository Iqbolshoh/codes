<?php
$n = 4;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    $b[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . " ....... B[" . $i  . "] = " . $b[$i] . "<br>";
    $d = $a[$i];
    $a[$i] = $b[$i];
    $b[$i] = $d;
}
echo "<br> Qiymat almashish <br> <br>";
for ($i = 0; $i < $n; $i++) {
    echo "A[" . $i  . "] = " . $a[$i] . " ....... B[" . $i  . "] = " . $b[$i] . "<br>";
}
