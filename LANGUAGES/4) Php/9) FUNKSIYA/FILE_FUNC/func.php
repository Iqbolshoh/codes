<?php
function plus($a, $b)
{
    $str = $a . " + " . $b . " = " . ($a + $b);
    return $str;
}
function minus($a, $b)
{
    $str = $a . " - " . $b . " = " . ($a - $b);
    return $str;
}
function daraja($a, $b)
{
    $k = 1;
    for ($i = 0; $i < $b; $i++) {
        $k *= $a;
    }
    $str = $a . " ^ " . $b . " = " . $k;
    return $str;
}
function maxx($a, $b)
{
    if ($a > $b) {
        return $a;
    } else return $b;
}
function minn($a, $b)
{
    if ($a < $b) {
        return $a;
    } else return $b;
}
