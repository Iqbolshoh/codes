<?php
$A = 2;
$B = 2;
$C = 3;
echo " A = " . $A . " B = " . $B . " C = " . $C . " <br>";
$l = ($A <= $B and $B <= $C);
if ($l) {
    echo "True";
} else {
    echo "False";
}
