<?php
$a = 1;
$b = 3;
$S = 0;
for ($i = $a; $i <= $b; $i++) {
    $S += pow($i, 2);
}
echo $a . " dan " . $b . " gacha sonlar kvadrati yigindisi = " . $S;
