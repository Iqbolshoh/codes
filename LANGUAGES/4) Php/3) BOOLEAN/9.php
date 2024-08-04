<?php
$A = 1;
$B = 2;
echo " A = " . $A . " B = " . $B . "<br>";
$l = ($A % 2 == 1 or $B % 2 == 1);
if ($l) {
    echo "True";
} else {
    echo "False";
}
