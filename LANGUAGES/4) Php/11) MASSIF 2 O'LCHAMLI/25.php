<?php
$m = 3;
$n = 4;
echo $m . " x " . $n . " matritsa " . "<br><br>";
for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        $a[$i][$j] = rand() % 10;
        echo  $a[$i][$j] . " ";
        $S += $a[$i][$j];
    }
    if ($i == 0) {
        $max = $S;
        $index = $i;
    }
    if ($max < $S) {
        $max = $S;
        $index = $i;
    }
    $S = 0;
    echo "<br>";
}
echo "<br>" . $index . " - Indexli qator Yig'indisi eng katta = " . $max . " <br>";
