<?php
$n = 27;
echo $n . " - ";
switch (intval($n / 10)) {
    case 2:
        echo " Yigirma ";
        break;
    case 3:
        echo " O'ttiz ";
        break;
    case 4:
        echo " Qirq ";
        break;
    case 5:
        echo " Ellik ";
        break;
    case 6:
        echo " Oltmish ";
        break;
}
switch ($n % 10) {
    case 1:
        echo " bir ";
        break;
    case 2:
        echo " ikki ";
        break;
    case 3:
        echo " uch ";
        break;
    case 4:
        echo " to'rt ";
        break;
    case 5:
        echo " besh ";
        break;
    case 6:
        echo " Olti ";
        break;
    case 7:
        echo " yetti ";
        break;
    case 8:
        echo " sakkiz ";
        break;
    case 9:
        echo " to'qqiz ";
        break;
}
