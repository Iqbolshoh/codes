<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP | HTML Form</title>
    <style>
        .result {
            color: red;
            font-size: 22px;
        }
    </style>
</head>

<body>

    <?php
    $result = "";

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $name = $_POST["name"];
        $age = $_POST["age"];
        $result = "Ism: $name <br> Yosh: $age";
    }
    ?>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
        <label for="name">Ismingiz:</label>
        <input type="text" id="name" name="name" required>
        <br>
        <label for="age">Yoshingiz:</label>
        <input type="number" id="age" name="age" required>
        <br>
        <input type="submit" value="Jo'natish">
    </form>
    <p class="result"><?php echo $result; ?></p>

</body>

</html>