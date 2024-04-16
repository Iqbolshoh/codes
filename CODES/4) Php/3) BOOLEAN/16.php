<?php
$A = 84;
echo " A = " . $A . "<br>";
$l = ($A > 9 and $A <= 99 and $A % 2 == 0);
if ($l) {
    echo "True";
} else {
    echo "False";
}
