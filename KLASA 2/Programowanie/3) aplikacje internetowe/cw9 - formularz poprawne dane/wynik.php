<!DOCTYPE html>
<html lang="pl">

<head>
    <title></title>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="css/style.css" rel="stylesheet">
</head>

<body>
    <?PHP
    var_dump($_GET);
    if(isset($_GET['imie']) && isset($_GET['nazwisko']) && isset($_GET['data'])){
        echo "<h3 style='color: green;'>poprawne dane</h3>\n";
        $imie=$_GET['imie'];
        $nazwisko=$_GET['nazwisko'];
        $data=$_GET['data'];
        if(trim($nazwisko)!='' && trim($imie)!=''&& trim($data)!=''){
            echo "<div>Zajerestrowano: {$imie} {$nazwisko} z datą: {$data}</div>\n";
    }else{
        echo "<h3 style='color: red;'>niepoprawne dane<a href='cw8.html'>Powrót do formularza</a></h3>";
    }
    }else{
        echo "<h3>Brak danych nic z tego nie będzie<a href='cw8.html'>Powrót do formularza</a></h3>\n";
    }
    ?>
</body>

</html>