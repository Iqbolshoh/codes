<?php
$x = 5;
echo " x = " . $x . " <br>";
if ($x <= 0) {
    $x = -$x;
}
if ($x > 0 and $x < 2) {
    $x = $x ** 2;
}
if ($x >= 2) {
    $x = 4;
}
echo " x = " . $x . " <br>";
