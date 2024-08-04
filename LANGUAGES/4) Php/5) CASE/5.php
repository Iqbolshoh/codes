<?php
$a = 7;
$b = 5;
$n = 4;
echo " a = " . $a  . " <br>";
echo " b = " . $b . " <br>";
switch ($n) {

    case 1:
        echo $a . " + " . $b . " = " . $a + $b;
        break;
    case 2:
        echo $a . " - " . $b . " = " . $a - $b;
        break;
    case 3:
        echo $a . " / " . $b . " = " . $a / $b;
        break;
    case 4:
        echo $a . " * " . $b . " = " . $a * $b;
        break;
}
