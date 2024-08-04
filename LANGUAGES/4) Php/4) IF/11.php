<?php
$a = 7;
$b = 5;
if ($a != $b) {
    if ($a <= $b) $a = $b;
} else $a = 0;

$b = $a;

echo  $a . " " . $b;
