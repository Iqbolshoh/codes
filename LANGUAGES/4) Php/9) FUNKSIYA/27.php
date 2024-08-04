<?php
function IsPower($k, $n)
{
    $c = 0;
    while ($k > 1) {
        if ($k % $n != 0) {
            return "false";
        }
        $k /= $n;
        $c++;
    }
    if ($k == 1) {
        return "true";
    } else {
        return "false";
    }
}
echo IsPower(3, 2);
