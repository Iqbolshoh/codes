<?php
function IsSquare($K)
{
    $a = intval(sqrt($K));
    if (pow($a, 2) == $K) {
        return "true";
    } else {
        return "false";
    }
}

$a = 25;
$b = 36;
$c = 48;
echo $a . " " . IsSquare($a) . "<br>";
echo $b . " " . IsSquare($b) . "<br>";
echo $c . " " . IsSquare($c) . "<br>";
