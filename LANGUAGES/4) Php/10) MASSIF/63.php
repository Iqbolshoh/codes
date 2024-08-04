<?php
$n = 5;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    $b[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . " ....... B[" . $i  . "] = " . $b[$i] . "<br>";
}
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    $c[$i] = $a[$i];
    $c[$i + $n] = $b[$i];
}
for ($i = 0; $i < $n * 2 - 1; $i++) {
    for ($j = $i + 1; $j < $n * 2; $j++) {
        if ($c[$i] > $c[$j]) {
            $d = $c[$i];
            $c[$i] = $c[$j];
            $c[$j] = $d;
        }
    }
}
for ($i = 0; $i < $n * 2; $i++) {
    echo "C[" . $i  . "] = " . $c[$i] . "<br>";
}
