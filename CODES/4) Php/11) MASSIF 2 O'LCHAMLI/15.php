<?php
function func($m, $n, &$a)
{
    $val = 1;
    $k = 0;
    $l = 0;
    while ($k < $m && $l < $n) {
        for ($i = $l; $i < $n; ++$i)
            $a[$k][$i] = $val++;

        $k++;
        for ($i = $k; $i < $m; ++$i)
            $a[$i][$n - 1] = $val++;
        $n--;
        if ($k < $m) {
            for ($i = $n - 1; $i >= $l; --$i)
                $a[$m - 1][$i] = $val++;
            $m--;
        }
        if ($l < $n) {
            for ($i = $m - 1; $i >= $k; --$i)
                $a[$i][$l] = $val++;
            $l++;
        }
    }
}

$m = 4;
$n = 4;
func($m, $n, $a);
for ($i = 0; $i < $m; $i++) {
    for ($j = 0; $j < $n; $j++) {
        echo ($a[$i][$j]);
        echo (" ");
    }
    echo ("<br>");
}
