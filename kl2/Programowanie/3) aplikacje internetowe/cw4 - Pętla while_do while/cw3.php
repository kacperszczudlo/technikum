<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<h3>Pętla <i>for</i> czyli:
 <span style='color:green'>for($i=0;$i &lt;10;i++){..}</h3>
<?php
    const ZAKRES = 8;
    echo "<ol>\n";
    for($i=1;$i<=ZAKRES;$i++){
        echo "<li>Element listy numerowej {$i}</li>\n";
    }
    echo "</ol>\n";
?>
<h3>Pętla <i>while</i> czyli:
    <span style='color:green'>while($i &lt;10;){..}</h3>
<?php
    $suma = 0;
    $liczby = 0;
    $liczbazer = 0;
    while($suma<100){ 
        $liczby++;       
        $liczba = random_int(0,50);
        echo $liczba." ";
        if($liczba == 0){
            $liczbazer = 1;
        }
        echo $liczba." ";
        $suma += $liczba;
    }
    echo "<br>suma: {$suma}<br>\n";
    echo "ilośc liczb: .$liczby";
    echo "<br>Średnia arytmetyczna: ".$suma/$liczby;
    echo "<br>ilośc zer: ".$liczbazer;
?>
<h3>Pętla do{...}while( )</h3>
<?php
    $losowa = 0;
    $liczbybezzara = 0;
    do{
        $losowa = random_int(0,20);
        if($losowa>0)$liczbybezzara++;
        echo $losowa.' ';
    }while($losowa!=0);
    echo "<br>Ilośc liczb:(nie licząc zer) ".$liczbybezzara;
?>
</body>
</html>
