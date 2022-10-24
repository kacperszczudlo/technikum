<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Tablice - wstęp</h1>
    <?php
    $t1 = array(1,3,7,9,'true',true,array(1,2,3,4,5));
    var_dump($t1);
    print_r($t1);
    $t1[] = "nowy";//dodanie na koncu tablicy
    var_dump($t1);
    $t1[6] = 'zmieniony';
    var_dump($t1);
    $t1[12] = "element dwunasty";
    var_dump($t1);
    ?>
    <h1>Operacje podstawowe na tablicach</h1>
    <?php
    $t2 = [12,3,"sss"/*,[3,5,8]*/,7,true];
    var_dump($t2);
    foreach($t2 as $elem){
        if(is_array($elem)) print_r($elem);
        echo"<div>{$elem}</div>\n";
    }
    unset($t2[2]);
    foreach($t2 as $elem){
        if(is_array($elem)) print_r($elem);
        echo"<div>{$elem}</div>\n";
    }
    /*for($i=0;$i<count($t2);$i++){
        if(is_array($t2[$i]))print_r($t2[$i]);
        else echo "<div>{t2[$i]}</div>\n";
    }*/
    ?>
    <h1>Tablice owoce</h1>
    <ol>
    <?php
    $owoce = ["Sliwki","Gruszki","Jabłka","Pomarancze","Banany"];
    sort($owoce);
    function getList(array $dane):string{
        $html = "<ol>\n";
        foreach($dane as $elem){
            $html .= "<li>{$elem}</li>\n";
        }
        $html .= "</ol>\n";
        return $html;
    }
    echo getList($owoce);
    ?>
    </ol>
    <h1>Kwadraty liczb</h1>
    <?php
    function fillArray(int $size):array{
        $pow = [];
        for(i=0;i<=$size;i++){
            $pow[] = $i * $i;
        }
        return $pow;
        function toTable(array $dane):string{
            $html = "<table"
        }
    }
    ?>
</body>
</html>