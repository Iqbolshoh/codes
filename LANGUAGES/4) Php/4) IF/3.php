<?php
$a = 0;
echo " a = " . $a . "<br>";

if ($a > 0) {
    $a++;
} else if ($a == 0) {
    $a = 10;
} else {
    $a -= 2;
}

echo " a = " . $a;
