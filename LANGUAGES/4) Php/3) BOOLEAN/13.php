<?php
$A = -11;
$B = -99;
$C = 3;
echo " A = " . $A . " B = " . $B . " C = " . $C . "<br>";
$l = ($A > 0 or $B > 0 or $C > 0);
if ($l) {
    echo "True";
} else {
    echo "False";
}
