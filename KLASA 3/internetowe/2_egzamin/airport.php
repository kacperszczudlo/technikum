<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="widtd=device-widtd, initial-scale=1.0">
    <link rel="stylesheet" href="styl6.css">
    <title>Odloty samolotów</title>
</head>
<body>
<section id="baner">
    <section id="b1">
        <h2>Odloty z lotniska</h2>
    </section>
    <section id="b2">
        <img src="zad6.png" alt="logotyp">
    </section>
</section>
    <section id="glowny">
        <h4>tabela odlotów</h4>   
        <table>
        <tr>    
            <td>lp.</td>
            <td>numer rejsu</td>
            <td>czas</td>
            <td>kierunek</td>
            <td>status</td>
            <tr>

            <?php
            $c_name = "komunikat_po";
            $c_value = "<p>„Miło nam, że nas znowu odwiedziłeś”</p>";     
            $c_value2 = "<p>„Dzień dobry! Sprawdź regulamin naszej strony”</p>";   
        setcookie($c_name, $c_value, time() + 3600, '/');
        session_start();
        $mysqli = new mysqli('localhost', 'root','','egzamin_tip_g') or die(mysqli_error($mysqli));
        $result = $mysqli -> query ("SELECT  * FROM odloty") or die ($mysqli->error);
        while ($row = $result->fetch_assoc()): 
        ?>
       
            <tr>
                <td><?php echo $row['samoloty_id']; ?></td>
                <td><?php echo $row['nr_rejsu']; ?></td>
                <td><?php echo $row['czas']; ?></td>
                <td><?php echo $row['kierunek']; ?></td> 
                <td><?php echo $row['status_lotu']; ?></td>                   
            </tr>
<?php endwhile; ?>
    </table><br>
    </section>
    <section id="stopka">
        <section id="s1">
                <a href="zad6.png" target="blanc">Pobierz obraz</a>
        </section>
        <section id="s2">
        <?php
if(count($_COOKIE) > 0) {
    echo "$c_value";
} else {
    echo "$c_value2";
}
?>
        </section>
        <section id="s3">Autor: 03261802055</section>
    </section>
</body>
</html>