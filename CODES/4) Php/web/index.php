<!-- yil kiritilganda uning kabisa -->

<?php
$n = 399;
if (($n % 4 == 0 and $n % 100 != 0) or $n % 400 == 0) {
    echo  $n . " - Yil kabisa yili ";
} else {
    echo  $n . " - Yil kabisa yili emas";
}
echo  "<br>" . "<br>";


// a va b sonlari berilgan ushbu soonlarnining eng kichik umumiy karralisini toping

$x = 6;
$y = 8;

$Ekuk = $x * $y;

while ($x != $y) {
    if ($x > $y) $x %= $y;
    else $y %= $x;

    if ($x == 0) $x = $y;
    if ($y == 0) $y = $x;
}

$Ekuk /= $x;

echo " EKUK = " . $Ekuk  . "<br>" . "<br>";



// toq sonlar kvadrat jadvalini tuzish

// for ($a = 1; $a <= 9; $a += 2) {
//     for ($b = 1; $b <= 9; $b += 2) {
//         echo $a . " * " . $b . " = " . ($a * $b) . "<br>";
//     }
// }
?>


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Misol PHP</title>
    <style>
        .number {
            color: blue;
        }

        .operator {
            color: black;
            font-weight: 900;
        }

        span {
            font-size: 18px;
        }
    </style>
</head>

<body>
    <table border="1" style="margin: 0 auto;">
        <?php for ($a = 1; $a <= 9; $a += 2) : ?>
            <tr>
                <?php for ($b = 1; $b <= 9; $b += 2) : ?>
                    <td style="padding: 3px 5px;">
                        <span class="number"><?php echo $b; ?></span>
                        <span class="operator">*</span>
                        <span class="number"><?php echo $a; ?></span>
                        <span class="operator">=</span>
                        <span style="color: red;"><?php echo $a * $b; ?></span>
                    </td>
                <?php endfor; ?>
            </tr>
        <?php endfor; ?>
    </table>

</body>

</html>


<?php

function filter($s)
{
    $s = trim($s);    // bo'shliq
    $s = htmlspecialchars($s, ENT_QUOTES);  // ' boshat -> html code 
    return $s;
}
