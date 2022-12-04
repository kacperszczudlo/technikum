<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="styl1.css">
    <title>Portal ogłoszeniowy</title>
</head>
<body>
    <section id="baner">
        <h1>Portal ogłoszeniowy</h1>
    </section>
    <section id="panel_lewy">
    <h2>Kategorie ogłoszeń</h2>
        <ol type="I">
            <li>Książki</li>
            <li>Muzyka</li>
            <li>Filmy</li>
        </ol>
        <img src="ksiazki.jpg" alt="Kupię / sprzedam książkę">
        <table>
            <tr>
                <td>Liczba ogłoszeń</td>
                <td>Cena ogłosznia</td>
                <td>Bonus</td>
            </tr>
            <tr>
                <td>1-10</td>
                <td>1 PLN</td>
                <td rowspan="3">Subskrypcja newslettra to upust 0,20 PLN na ogłoszenie</td>
            </tr>
            <tr>
                <td>11-50</td>
                <td>0,80 PLN</td>               
            </tr>
            <tr>
                <td>51 i więcej</td>
                <td>0,60 PLN</td>               
            </tr>
        </table>
    </section>
    <section id="panel_prawy">
        <h2>Ogłoszenia kategorii książki</h2>
        <?php
        $mysqli = new mysqli('localhost', 'root','','3ti_ark2_baza_2021_22') or die(mysqli_error($mysqli));
        $result = $mysqli -> query ("SELECT  ogloszenie.id,ogloszenie.tytul, ogloszenie.tresc, uzytkownik.telefon FROM ogloszenie INNER JOIN uzytkownik ON ogloszenie.uzytkownik_id=uzytkownik.id") or die ($mysqli->error);
        while ($row = $result->fetch_assoc()): 
        ?>
               <h3><?php echo $row['id']." ". $row['tytul']; ?><br>
               <?php echo $row['tresc'] ?><br>
               telefon: <?php echo $row['telefon'] ?>
<?php endwhile; ?>
    </section>
    <section id="stopka">
        <section id="s1">Portal  ogłoszeniowy  opracował: 03261802055</section>
    </section>
</body>
</html>