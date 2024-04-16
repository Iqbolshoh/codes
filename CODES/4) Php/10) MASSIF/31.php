<?php
$n = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
for ($i = $n - 2; $i > 0; $i--) {
    if ($a[$i - 1] < $a[$i]) {
        echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    }
}