<?php
$x1 = 4;
$y1 = 4;
$x2 = 3;
$y2 = 5;
echo " X1 = " . $x1 . " <br>";
echo " Y1 = " . $y1 . " <br>";
echo " X2 = " . $x2 . " <br>";
echo " Y2 = " . $y2 . " <br>";
$l = ($x1 == $x2 and abs($y1 - $y2) == 1 or $y1 == $y2 and abs($x1 - $x2) == 1 or abs($x1 - $x2) == 1 and abs($y1 - $y2) == 1);
if ($l) {
    echo "True";
} else {
    echo "False";
}

