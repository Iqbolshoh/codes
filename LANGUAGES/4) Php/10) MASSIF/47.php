<?php
$n = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
echo "<br>";

for ($i = 0; $i < $n - 1; $i++) {
    for ($j = $i + 1; $j < $n; $j++) {
        if ($a[$i] > $a[$j]) {
            $d = $a[$i];
            $a[$i] = $a[$j];
            $a[$j] = $d;
        }
    }
}

for ($i = 0; $i < $n; $i++) {
    if ($a[$i] != $a[$i + 1]) {
        echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    }
}
