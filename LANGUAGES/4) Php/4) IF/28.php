<?php
$n = 399;
if (($n % 4 == 0 and $n % 100 != 0) or $n % 400 == 0) echo  $n . " - Yil kabisa yili ";
else echo  $n . " - Yil kabisa yili emas";
