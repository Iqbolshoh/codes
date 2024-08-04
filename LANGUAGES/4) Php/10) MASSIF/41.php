<?php
$n = 5;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
for ($i = 0; $i < $n; $i++) {
    if ($i == 0) {
        $maxSum = $a[$i] + $a[$i + 1];
        $max1 = $a[$i];
        $max2 = $a[$i + 1];
    }
    if ($maxSum < $a[$i] + $a[$i + 1]) {
        $maxSum = $a[$i] + $a[$i + 1];
        $max1 = $a[$i];
        $max2 = $a[$i + 1];
    }
}

echo " MaxSum : " . $maxSum . "<br>";
echo " A : " . $max1 . "<br>";
echo " B : " . $max2 . "<br>";
