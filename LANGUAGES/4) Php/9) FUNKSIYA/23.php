<?php
function quarter($x, $y)
{
    if ($x > 0 and $y > 0) {
        return 1;
    }
    if ($x < 0 and $y > 0) {
        return 2;
    }
    if ($x < 0 and $y < 0) {
        return 3;
    }
    if ($x > 0 and $y > 0) {
        return 4;
    }
}
$x1 = 1;
$y1 = 1;
$x2 = 1;
$y2 = -1;
echo $x1 . " " . $y1 . " nuqta " . quarter($x1, $y1) . " - chorakda <br>";
echo $x2 . " " . $y2 . " nuqta " . quarter($x2, $y2) . " - chorakda <br>";
