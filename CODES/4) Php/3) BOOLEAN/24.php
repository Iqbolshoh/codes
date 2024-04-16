<?php
$a = -1;
$b = -2;
$c = 3;
echo " a = " . $a . " b = " . $b . " c = " . $c . "<br>";
$D = $b ** 2 - 4 * $a * $c;
$l = ($D >= 0);
if ($l) {
    echo "True";
} else {
    echo "False";
}
