<?php
$x = 2;
echo " x = " . $x . " <br>";
if ($x < 0) {
    $x = 0;
}
if ($x % 2 == 0) {
    $x = 1;
} else {
    $x = -1;
}
echo " x = " . $x . " <br>";
