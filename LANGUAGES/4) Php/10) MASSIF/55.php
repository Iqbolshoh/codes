<?php
$n = 8;
$c = 0;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 100;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
    if ($i % 2 == 1) {
        $b[$c] = $a[$i];
        $c++;
    }
}
echo "<br> B massif element soni = " . $c . "<br><br>";
for ($i = 0; $i < $c; $i++) {
    echo "B[" . $i  . "] = " . $b[$i] . "<br>";
}