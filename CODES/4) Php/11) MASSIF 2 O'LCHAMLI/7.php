<?php
$m = 3;
$n = 4;
$k = 1;
echo $m . " x " . $n . " matritsa " . "<br><br>";
for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        $a[$i][$j] = rand() % 10;
        echo  $a[$i][$j] . " ";
    }
    echo "<br>";
}
echo "<br>" . ($k + 1) . " - qator: ";

for ($j = 0; $j < $n; $j++) {
    echo  $a[$k][$j] . " ";
}
