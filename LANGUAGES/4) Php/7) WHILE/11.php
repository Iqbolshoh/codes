<?php
$n = 10;
$k = 1;
$S = 0;
echo " n = " . $n . " <br> (0 ";
while ($S < $n) {
    echo  " + " . $k;
    $S += $k;
    $k++;
}
echo "  ) >= " . $n;
