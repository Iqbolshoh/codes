<?php
$n = 7;
for ($i = 0; $i < $n; $i++) {
    $a[$i] = rand() % 10;
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
for ($i = 0; $i < $n; $i++) {
    if ($a[$n - $i - 1] % 2 == 1) {
        $toq = $a[$n - $i - 1];
        break;
    }
}
echo "<br> Oxirgi toq son = " . $toq . "<br><br>";

for ($i = 0; $i < $n; $i++) {
    if ($a[$i] % 2 == 1) {
        $a[$i] *= $toq;
    }
    echo "A[" . $i  . "] = " . $a[$i] . "<br>";
}
