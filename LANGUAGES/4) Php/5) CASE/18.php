<?php
$n = 777;
echo $n . " - ";
switch (intval($n / 100)) {
    case 1:
        echo " bir yuz ";
        break;
    case 2:
        echo " ikki yuz ";
        break;
    case 3:
        echo " uch yuz ";
        break;
    case 4:
        echo " to'rt yuz ";
        break;
    case 5:
        echo " besh yuz ";
        break;
    case 6:
        echo " Olti yuz ";
        break;
    case 7:
        echo " Yetti yuz ";
        break;
    case 8:
        echo " Sakkiz yuz ";
        break;
    case 9:
        echo " To'qqiz yuz ";
        break;
}
switch (intval($n / 10) % 10) {
    case 1:
        echo " o'n ";
        break;
    case 2:
        echo " yigirma ";
        break;
    case 3:
        echo " o'ttiz ";
        break;
    case 4:
        echo " qirq ";
        break;
    case 5:
        echo " ellik ";
        break;
    case 6:
        echo " oltmish ";
        break;
    case 7:
        echo " yetmish ";
        break;
    case 8:
        echo " sakson ";
        break;
    case 9:
        echo " to'qson ";
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
