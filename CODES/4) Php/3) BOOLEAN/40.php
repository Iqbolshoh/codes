<?php
$x1 = 1;
$y1 = 1;
$x2 = 2;
$y2 = 3;
echo " X1 = " . $x1 . " <br>";
echo " Y1 = " . $y1 . " <br>";
echo " X2 = " . $x2 . " <br>";
echo " Y2 = " . $y2 . " <br>";
$l = (abs($x1 - $x2) == 1 and  abs($y1 - $y2) == 2 or abs($x1 - $x2) == 2 and  abs($y1 - $y2) == 1);
if ($l) {
    echo "True";
} else {
    echo "False";
}
