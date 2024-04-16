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
echo "<br>";

for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        if ($i % 2 == 0) {
            echo  $a[$i][$j] . " ";
        } else {
            echo  $a[$i][$n - $j - 1] . " ";
        }
    }
    echo "<br>";
}
