<?php
$a = 9;
$b = 7;
if ($a > $b) {
    $c = $a;
    $a = $b;
    $b = $c;
}
echo  $a . " " . $b;
