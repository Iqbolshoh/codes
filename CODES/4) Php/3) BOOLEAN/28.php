<?php
$x = 1;
$y = 1;
echo " X = " . $x . " y = " . $y . "<br>";
$l = ($x > 0 and $y > 0 or $x < 0 and $y < 0);
if ($l) {
    echo "True";
} else {
    echo "False";
}
