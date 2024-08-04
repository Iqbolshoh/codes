<?php
$n = 5000;
echo " bir kg konfet narxi = " . $n . " so'm <br>";
for ($i = 0.1; $i <= 1; $i += 0.1) {
    echo $i . " kg konfet narxi = " . $n * $i . "<br>";
}
