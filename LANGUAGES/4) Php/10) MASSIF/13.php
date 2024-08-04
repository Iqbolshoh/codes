<?php
$n = 8;
for ($i = $n - 1; $i > 0; $i -= 2) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
