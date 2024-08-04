<?php
function max2($a, $b)
{
    if ($a > $b) return $a;
    return $b;
}
$a = 9;
$b = 15;
$c = 11;
echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
if ($a > $b and $a > $c) {
    $max1 = $a;
    $max2 = max2($b, $c);
}
if ($b > $a and $b > $c) {
    $max1 = $b;
    $max2 = max2($a, $c);
}
if ($c > $a and $c > $b) {
    $max1 = $c;
    $max2 = max2($b, $c);
}
echo " max1 qiymat = " . $max1 . " <br>";
echo " max2 qiymat = " . $max2 . " <br>";
