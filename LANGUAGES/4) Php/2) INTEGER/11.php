<?php
$n = 578;
echo " N = " . $n . " <br>";
$yuz = intval($n / 100);
$on = intval($n / 10) % 10;
$bir = $n % 10;
$yig = $yuz + $on + $bir;
echo " Raqamlar yigindisi = " . $yig;