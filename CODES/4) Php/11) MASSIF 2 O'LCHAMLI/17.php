<?php
$m = 3;
$n = 4;
$k = 1;
$K = 1;
echo $m . " x " . $n . " matritsa " . "<br><br>";
for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        $a[$i][$j] = rand() % 10;
        echo  $a[$i][$j] . " ";
    }
    echo "<br>";
}
echo "<br>";
for ($j = 0; $j < $n; $j++) {
    echo  $a[$k][$j] . " ";
    $S += $a[$k][$j];
    $K *= $a[$k][$j];
}
echo "<br><br>";
echo ($k + 1) . " - qator yi'gindisi = " . $S . " <br>";
echo ($k + 1) . " - qator Ko'paytmasi = " . $K . " <br>";
