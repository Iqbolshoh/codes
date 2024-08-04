<?php
$A = -777;
$B = 777;
$C = 3;
echo " A = " . $A . " B = " . $B . " C = " . $C . "<br>";
$l = ($A == -$B or $B == -$C or $C == -$A);
if ($l) {
    echo "True";
} else {
    echo "False";
}
