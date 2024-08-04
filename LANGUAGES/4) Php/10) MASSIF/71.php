<?php
$n = 8;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
for ($i = 0; $i < $n/2; $i++) {
    $d = $a[$i];
    $a[$i] = $a[$n - $i - 1];
    $a[$n - $i - 1] = $d;
}
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
