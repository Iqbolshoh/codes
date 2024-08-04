<?php
$x = 1;
$y = 0;
echo " X = " . $x . " <br>";
echo " Y = " . $y . " <br>";
if ($x == 0 and $y == 0) {
    echo  0;
}
if ($x == 0 and $y != 0) {
    echo  1;
}
if ($x != 0 and $y == 0) {
    echo  2;
}
if ($x != 0 and $y != 0) {
    echo  3;
}
