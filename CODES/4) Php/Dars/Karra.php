<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP and HTML</title>
    <style>
        .number {
            color: blue;
        }

        .operator {
            color: black;
            font-weight: 900;
        }

        .result {
            color: red;
        }

        table {
            margin-left: 20%;
            margin-top: 10%;
        }

        td {
            padding: 5px 8px;
        }

        .number,
        .operator,
        .result {
            font-size: 27px;
        }
    </style>
</head>

<body>

    <?php
    // PHP kodi boshlanishi
    ?>

    <!-- HTML kodni PHP ichida ishlatish -->
    <table border="1">
        <?php for ($a = 2; $a <= 9; $a++) { ?>
            <tr>
                <?php for ($b = 2; $b <= 9; $b++) { ?>
                    <td>
                        <span class="number"><?php echo $b; ?></span>
                        <span class="operator">*</span>
                        <span class="number"><?php echo $a; ?></span>
                        <span class="operator">=</span>
                        <span class="result"><?php echo $a * $b; ?></span>
                    </td>
                <?php } ?>
            </tr>
        <?php } ?>
    </table>

</body>

</html>