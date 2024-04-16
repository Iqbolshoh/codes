<?php
$A = -15;
$B = 7;
$C = 5;
echo " A = " . $A . " B = " . $B . " C = " . $C . "<br>";
$l = (($A > 0) + ($B > 0) + ($C > 0) == 2);
if ($l) {
    echo "True";
} else {
    echo "False";
}
