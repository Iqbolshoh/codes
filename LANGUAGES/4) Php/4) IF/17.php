<?php
$a = 1;
$b = 3;
$c = 5;
echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
if ($a > $b and $b > $c or $a < $b and $b < $c) {
    $a *= 2;
    $b *= 2;
    $c *= 2;
} else {
    $a = -$a;
    $b = -$b;
    $c = -$c;
}

echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
