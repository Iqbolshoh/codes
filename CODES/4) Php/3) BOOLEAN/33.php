<?php
$a = 4;
$b = 3;
$c = 4;
echo " A = " . $a . " B = " . $b . " C = " . $c . " <br>";
$l = ($a + $b > $c and $a + $c > $b and $b + $c > $a);
if ($l) {
    echo "True";
} else {
    echo "False";
}
