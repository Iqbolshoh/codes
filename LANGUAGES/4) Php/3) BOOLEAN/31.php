<?php
$a = 4;
$b = 3;
$c = 4;
echo " A = " . $a . " B = " . $b . " C = " . $c . " <br>";
$l = ($a == $b and $b != $c or $a == $c and $b != $c or $b == $c and $a != $b);
if ($l) {
    echo "True";
} else {
    echo "False";
}

 