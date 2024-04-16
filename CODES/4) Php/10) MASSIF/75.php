<?php
$n = 4;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    if ($i == 0) {
        $max = $a[$i];
        $min = $a[$i];
    }
    if ($max < $a[$i]) {
        $max = $a[$i];
        $maxIndex = $i;
    }
    if ($min > $a[$i]) {
        $min = $a[$i];
        $minIndex = $i;
    }
}
// for ($i = $maxIndex; $i <= $minIndex; $i++) {
$d = $a[$maxIndex];
$a[$maxIndex] = $a[$minIndex];
$a[$minIndex] = $d;
// }
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
