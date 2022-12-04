<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ćwiczenie 2 - php</title>
</head>
<body>
    <?php
    $a = "ala ma kota";
    define("stala",34);
    echo "<p> Stała wynosi: ".stala."</p>";
    var_dump($a);
    $a = 45;
    const stala2 = 20;
    var_dump($a);
    if($a<stala2){
        echo "<p>Zmienna a jest mniejsza od: ".stala2."</p>";
        echo "<img src='malo.png'>";
    }elseif($a>stala2){
        echo "<p>Zmienna a jest większa od: ".stala2."</p>";
        echo "<img src='duzo.png'>";
    }else{
        echo "<p>Zmienna a jest równa: ".stala2."</p>";
        echo "<img src='ROWNA.png'>";
    }
    $wybor = true;
    $wynik = $wybor ? "PRWDA" : "FAŁSZ";
    echo"<h4>{$wynik}</h4>";
    $dzien = 1;
    switch($dzien){
        case 1 : echo "<p>Poniedziałek</p>";
        case 2 : echo "<p>Wtorek</p>";
        case 3 : echo "<p>Środa</p>";
        case 4 : echo "<p>Czwartek</p>";
        case 5 : echo "<p>Piątek</p>";
        case 6 : echo "<p>Sobota</p>";
        case 7 : echo "<p>Niedziela</p>";
        default : echo "<p style='color:red'>Błędne dane</p>";
    }
    ?>
    <div style="background-color: <?php
        $color = "blue";
        switch($color){
        case "red" : echo "red";break;
        case "blue" : echo "blue";break;
        case "yellow" : echo "yellow";break;
        default : echo "<black>";break;
        
        }
        ?>"> No jaki chcecie </div>
    </div>
</body>
</html>