<?php
$a = 9;
$b = 7;
$c = 5;
echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
if ($a > $b and $b < $c) {
    $min = $b;
}
if ($a > $c and $c < $b) {
    $min = $c;
}
if ($b > $a and $a < $c ) {
    $min = $a;
}
echo " min = " . $min . " <br>";
