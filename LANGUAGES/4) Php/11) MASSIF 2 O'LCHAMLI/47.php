<?php
$m = 3;
$n = 3;
$k1 = 1;
$k2 = 2;
for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        $a[$i][$j] = rand() % 10;
        echo $a[$i][$j] . " ";
    }
    echo "<br>";
}

echo "<br>" . $k1 . " va " . $k2 . " qator almashtirildi. <br><br>";

for ($j = 0; $j < $n; $j++) {
    $d = $a[$k1 - 1][$j];
    $a[$k1 - 1][$j] = $a[$k2 - 1][$j];
    $a[$k2 - 1][$j] = $d;
}

for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        echo $a[$i][$j] . " ";
    }
    echo "<br>";
}
