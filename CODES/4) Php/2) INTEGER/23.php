<?php
$n = 3700;
echo  $n . " sekund = ";
$soat = intval($n / 3600);
$n = $n % 3600;
$min = intval($n / 60);
$sekund = $n % 60;
echo $soat . " soat " . $min . " minut " . $sekund . " sekund ";
