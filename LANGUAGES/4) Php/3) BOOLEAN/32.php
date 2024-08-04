<?php
$a = 3;
$b = 4;
$c = 5;
echo " A = " . $a . " B = " . $b . " C = " . $c . " <br>";
$l = ($a ** 2 + $b ** 2) == $c ** 2 or ($a ** 2 + $c ** 2) == $b ** 2 or ($c ** 2 + $b ** 2) == $a ** 2;
if ($l) {
    echo "True";
} else {
    echo "False";
}
