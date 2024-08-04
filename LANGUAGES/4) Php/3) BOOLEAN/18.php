<?php
$A = 11;
$B = 7;
$C = 7;
echo " A = " . $A . " B = " . $B . " C = " . $C . "<br>";
$l = ($A == $B or $B == $C or $C == $A);
if ($l) {
    echo "True";
} else {
    echo "False";
}
