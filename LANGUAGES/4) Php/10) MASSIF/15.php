<?php
$n = 10;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    if ($i % 2 == 1) {
        echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    }
}
echo "<br>";
for ($i = $n - 1; $i >= 0; $i--) {
    if ($i % 2 == 0) {
        echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    }
}
