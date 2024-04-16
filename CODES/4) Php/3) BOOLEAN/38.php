<?php
$x1 = 1;
$y1 = 2;
$x2 = 3;
$y2 = 4;
echo " X1 = " . $x1 . " <br>";
echo " Y1 = " . $y1 . " <br>";
echo " X2 = " . $x2 . " <br>";
echo " Y2 = " . $y2 . " <br>";
$l = (abs($x1 - $x2) == abs($y1 - $y2));
if ($l) {
    echo "True";
} else {
    echo "False";
}

