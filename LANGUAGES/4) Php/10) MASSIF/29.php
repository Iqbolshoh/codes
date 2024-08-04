<?php
$n = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
$max = $a[1];
for ($i = 1; $i < $n; $i += 2) {
    if ($max < $a[$i]) {
        $max = $a[$i];
    }
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br> Max: " . $max . "<br>";
