<?php
function AddLeftDigit($son, $raqam)
{
    $k = $son;
    $c = 0;
    while ($k > 0) {
        $k = intval($k / 10);
        $c++;
    }
    echo $raqam * pow(10, $c) + $son;
}
AddLeftDigit(1234, 9);
