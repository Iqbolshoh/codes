<?php
$n = 123;
echo " N = " . $n . " <br>";
$yuz = intval($n / 100);
$on = intval($n / 10) % 10;
$bir = $n % 10;
$k =  $on * 100 + $yuz * 10 + $bir;
echo " Raqamlar yigindisi = " . $k;
