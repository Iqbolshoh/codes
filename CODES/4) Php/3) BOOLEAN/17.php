<?php
$A = 777;
echo " A = " . $A . "<br>";
$l = ($A > 99 and $A <= 999 and $A % 2 == 1);
if ($l) {
    echo "True";
} else {
    echo "False";
}
