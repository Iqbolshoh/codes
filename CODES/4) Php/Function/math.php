<?php

function katta($a, $b)
{
    return ($a > $b) ? $a : $b;
}

function kichik($a, $b)
{
    return ($a < $b) ? $a : $b;
}

function qoshish($a, $b)
{
    return $a + $b;
}

function ayrish($a, $b)
{
    return $a - $b;
}

function kopaytirish($a, $b)
{
    return $a * $b;
}

function boluv($a, $b)
{
    if ($b == 0)  return "Error: Division by zero!";
    return $a / $b;
}

function daraja($a, $b)
{
    $n = 1;
    for ($i = 0; $i < $b; $i++) $n *= $a;
    return $n;
}

function ekub($x, $y)
{
    while ($x != $y) {
        if ($x > $y) $x %= $y;
        else $y %= $x;
        if ($x == 0) $x = $y;
        if ($y == 0) $y = $x;
    }
    return $x;
}

function ekuk($x, $y)
{
    return ($x * $y) / Ekub($x, $y);
}
