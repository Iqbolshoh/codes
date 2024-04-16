<?php
function katta($a, $b)
{
    if ($a > $b) return $a;
    return $b;
}
$a = 9;
$b = 7;
$c = 5;
echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
if ($a > $b and $b < $c) {
    $min = $b;
    $max = katta($a, $c);
}
if ($a > $c and $c < $b) {
    $min = $c;
    $max = katta($a, $b);
}
if ($b > $a and $a < $c) {
    $min = $a;
    $max = katta($c, $b);
}
echo " min = " . $min . " max = " . $max . " <br>";
