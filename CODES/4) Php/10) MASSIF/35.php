<?php
$n = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";
for ($i = 0; $i < $n - 2; $i++) {
    if ($a[$i] < $a[$i + 1] and $a[$i + 1] > $a[$i + 2]) {
        echo "A[" . $i  . "] = " . $a[$i + 1] . "<br>";
        if ($c == 0) {
            $min = $a[$i + 1];
            $c++;
        }
        if ($min > $a[$i + 1]) {
            $min = $a[$i + 1];
        }
    }
}

echo "Min: " . $min . "<br>";
