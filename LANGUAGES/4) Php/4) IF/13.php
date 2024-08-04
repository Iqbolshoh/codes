<?php
$a = 9;
$b = 7;
$c = 5;
echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
if ($a > $b and $b > $c or $a < $b and $b < $c) {
    $orta = $b;
}
if ($a > $c and $c > $b or $a < $c and $c < $b) {
    $orta = $c;
}
if ($b > $a and $a > $c or $b < $a and $a < $c) {
    $orta = $a;
}
echo " orta qiymat = " . $orta . " <br>";
