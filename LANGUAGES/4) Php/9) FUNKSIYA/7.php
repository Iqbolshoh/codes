<?php
function InverDigit($n)
{
    echo $n;
    $k = 0;
    while ($n > 0) {
        $k = $k * 10 + $n % 10;
        $n = intval($n / 10);
    }
    echo " soni teskarisi = " . $k . "<br>";
}
$a = 123;
$b = 9977;
$c = 75;
InverDigit($a);
InverDigit($b);
InverDigit($c);
