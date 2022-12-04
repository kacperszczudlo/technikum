<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title> </title>
    <style>
table {
  font-family: arial, sans-serif;
  border-collapse: collapse;
  width: 100%;
}

td, th {
  border: 1px solid #dddddd;
  text-align: left;
  padding: 8px;
}

tr:nth-child(even) {
  background-color: #dddddd;
}
</style>
</head>
<body>
<table>
    <tr>
        <td>Liczby</td>
        <td>Liczby do kwadratu</td>
    </tr>
    <?php
//    function generuj(string $tekst, int $ile,string $typlisty = 'u'):string{
//        $wynik = "<{$typlisty}l>\n";
 //       for($i=0;$i<$ile;$i++){
  //          $wynik .= "<li>{$tekst}</li>\n";
     //   }
    //    $wynik .= "</{$typlisty}l>\n";
     //   return $wynik;
   // }
    //echo generuj("Ala ma kota",8,'o');
    //echo generuj("Kogo to obchodzi",3);
    ?>
    <?php
    function tabelka(int $liczba){
        $liczby = 1;
        for($i=0;$i<=$liczba;$i++){
            echo "<tr><td>{$liczby}</td><td>".$liczby*$liczby."</td></tr>";
            $liczby++;
        }

    };
    echo tabelka(1000);






    ?>    
</table>
</body>
</html>