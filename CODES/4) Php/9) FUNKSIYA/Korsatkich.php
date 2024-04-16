<?php
function swap(&$a, &$b)
{
    $t = $a;
    $a = $b;
    $b = $t;
}

$a = 7;
$b = 5;

swap($a, $b);
echo $a . " " . $b;
