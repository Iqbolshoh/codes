<?php
$a = 5;
$b = 7;
$c = -2;
$MusbatCount = 0;
$ManfiyCount = 0;

if ($a > 0) $MusbatCount++;
else if ($a < 0) $ManfiyCount++;
if ($b > 0) $MusbatCount++;
else if ($b < 0) $ManfiyCount++;
if ($c > 0) $MusbatCount++;
else if ($c < 0) $ManfiyCount++;

echo $MusbatCount . " Ta musbat <br>";
echo $ManfiyCount . " Ta Manfiy ";
