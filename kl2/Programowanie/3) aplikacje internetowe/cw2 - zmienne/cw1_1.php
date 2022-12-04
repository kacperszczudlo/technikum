<!DOCTYPE html>
<html lang="en">
    <head>
        <title>Początki php... są trudne</title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link href="cw1.css" rel="stylesheet">
    </head>
    <body>
    <h1>Ćwiczenie 1 z php</h1>
    <?php
        echo "<h1>Kacper Szczudło</h1>\n";
        echo "<h2>2TIP</h2>\n";
        //są przetwarzane przez interpretator "..\n..."
        echo "<h3>rok szkolny 2020/2021</h3>\n";
        echo "<h3><hr></h3>\n";

    ?>
    <h2>Zmienne w php wtęp</h2>
    <?php
    $imie = "Adam";
    $liczba = "34";
    echo '<p> imie = '. $imie . '</p>';
    //nie są przetwarzane przez interpretator '.....';
    echo '<p class="ramka"> imie = '. $imie . '</p>';
    echo "<p> liczba = {$liczba}</p>";
    var_dump($imie);
    var_dump($liczba);
    $c = 34.99;
    $d = true;
    var_dump($c);
    var_dump($d);
    ?>
    <h2>Zmienne php wtęp</h2>
    <?php
    $a = 34;
    $b = -12;
    echo $a + $b."<br>";
    echo $a - $b."<br>";
    echo $a / $b."<br>";
    echo $a * $b."<br>";
    ?>
    </body>
</html>