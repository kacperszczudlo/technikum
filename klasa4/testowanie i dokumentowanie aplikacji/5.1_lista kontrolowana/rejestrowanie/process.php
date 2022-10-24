<?php
session_start();

$mysqli = new mysqli('localhost', 'root','','szkola') or die(mysqli_error($mysqli));

$id = 0;
$update = false;
$zainteresowania = '';
$wyksztalcenie = '';
$wiek = '';
$karta_kredytowa = '';

if (isset($_POST['save'])){
    $zainteresowania = $_POST['zainteresowania'];
    $wyksztalcenie = $_POST['wyksztalcenie'];
    $wiek = $_POST['wiek'];
    $karta_kredytowa = $_POST['karta_kredytowa'];

    $mysqli -> query("INSERT INTO szkola(zainteresowania, wyksztalcenie, wiek, karta_kredytowa) VALUES('$zainteresowania','$wyksztalcenie','$wiek', '$karta_kredytowa')") or
    die($mysqli->error);

    $_SESSION['messege'] = "Pomyślnie zapisano rekord";
    $_SESSION['msg_type'] = "success";

    header("location: index.php");
}
if (isset($_GET['delete'])){
    $id = $_GET['delete'];
    
    $mysqli->query("DELETE FROM szkola WHERE id=$id") or die($mysqli->error);

    $_SESSION['messege'] = "Pomyślnie usunięto rekord";
    $_SESSION['msg_type'] = "danger";

    header("location: index.php");
}

if(isset($_GET['edit'])){
$id = $_GET['edit'];
$update = true;
$result = $mysqli->query("SELECT * FROM szkola WHERE id=$id") or die($mysqli->error);
if ($result->num_rows){
    $row = $result->fetch_array();
    $zainteresowania = $row['zainteresowania'];
    $wyksztalcenie = $row['wyksztalcenie'];
    $wiek = $row['wiek'];
    $karta_kredytowa = $row['karta_kredytowa'];
}
}
if (isset($_POST['update'])){
    $id = $_POST['id'];
    $miejsce = $_POST['zainteresowania'];
    $cena = $_POST['wyksztalcenie'];
    $data = $_POST['wiek'];
    $data = $_POST['karta_kredytowa'];

    $mysqli-> query("UPDATE szkola SET zainteresowania='$zainteresowania', wyksztalcenie='$wyksztalcenie', wiek='$wiek', karta_kredytowa='$karta_kredytowa' WHERE id=$id") or die($mysqli->error);
    $_SESSION['messege'] = "Pomyślnie zaktualizowano rekord";
    $_SESSION['msg_type'] = "waring";

    header('location: index.php');
}
?>