<?php
$n = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = $i + 1;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    $Sum += $a[$n - $i - 1];
    $b[$n - $i - 1] = $Sum;
}
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    echo "B[" . $i  . "] = " . $b[$i] . "<br>";
}
