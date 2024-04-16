<?php
$a = 1;
$b = 5;
$c = 5;
$d = 5;
$count = 1;
echo " a = " . $a . " <br>";
echo " b = " . $b . " <br>";
echo " c = " . $c . " <br>";
echo " d = " . $d . " <br>";
if ($a == $c and $c == $d) {
    $count = 2;
}
if ($a == $b and $b == $d) {
    $count = 3;
}
if ($a == $b and $b == $c) {
    $count = 4;
}

echo  $count ." - son teng emas " . " <br>";
