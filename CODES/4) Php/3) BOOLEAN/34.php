<?php
$x = 1;
$y = 2;
echo " X1 = " . $x . " Y1 = " . $y . " <br>";
$l = ($x + $y) % 2 == 1;
if ($l) {
    echo "True";
} else {
    echo "False";
}
