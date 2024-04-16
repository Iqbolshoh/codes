<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Rang Tanlash</title>
</head>

<body>

    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
        <label>Rang tanlash:</label><br>
        <input type="radio" id="red" name="color" value="red">
        <label for="red">Qizil</label><br>

        <input type="radio" id="yellow" name="color" value="yellow">
        <label for="yellow">Sariq</label><br>

        <input type="radio" id="green" name="color" value="green">
        <label for="green">Yashil</label><br>

        <input type="radio" id="blue" name="color" value="blue">
        <label for="blue">Kok</label><br>

        <br>
        <input type="submit" value="Tanlash">
    </form>

    <?php
    $selectedColor = $_POST["color"];
    echo "<div style='background-color: $selectedColor; width: 300px; height: 300px; margin-top: 10px; border-radius: 30%; margin-left: 42%; margin-top: 4% '></div>";
    ?>

</body>

</html>