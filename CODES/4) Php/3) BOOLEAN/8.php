<?php
$A = 5;
$B = 7;
echo " A = " . $A . " B = " . $B . " <br>";
$l = ($A % 2 == 1 and $B % 2 == 1);
if ($l) {
    echo "True";
} else {
    echo "False";
}
