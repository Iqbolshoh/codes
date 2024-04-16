<?php
function SumRange($a, $b)
{
    $S = 0;
    if ($a < $b) {
        for ($i = $a; $i <= $b; $i++) {
            $S += $i;
        }
        return $S;
    } else if ($a > $b) {
        return 0;
    }
}

$a = 1;
$b = 10;
$c = 15;
echo " Sum(a,b) = " . SumRange($a, $b) . "<br>";
echo " Sum(b,c) = " . SumRange($b, $c) . "<br>";
