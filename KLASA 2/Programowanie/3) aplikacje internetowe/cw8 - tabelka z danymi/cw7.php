<!DOCTYPE html>
<html lang="pl">
    <head>
        <title></title>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link href="css/style.css" rel="stylesheet">
        <style>
        table{
            border-collapse: collapse;
            width: 60%;
        }
        th{
            background-color: lightsalmon;
        }
        td,th{
            border: solid 1px brown;
            padding: 8px;
        }
        tr:nth-child(even){
            background-color: lightblue;
        }
        </style>
    </head>
    <body>
    <?php
    require "functions.php";
    $dane = getFromdb();
    echo toTable($dane);

    $colors = getAsscocArray();
    echo "<h3>{$colors['yellow']}</h3>";
    print_r(array_keys($colors));
    print_r(array_values($colors));
    var_dump($colors);
    echo colorsToSelect($colors);
    ?>
    </body>
</html>