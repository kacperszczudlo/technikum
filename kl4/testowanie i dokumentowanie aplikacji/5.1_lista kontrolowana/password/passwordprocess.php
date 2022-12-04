<?php
session_start();

$mysqli = new mysqli('localhost', 'root','','passworddb') or die(mysqli_error($mysqli));

$id = 0;
$update = false;
$password = '';

if (isset($_POST['save'])){
    $password = $_POST['password'];
    $wyksztalcenie = $_POST['wyksztalcenie'];
    $wiek = $_POST['wiek'];
    $karta_kredytowa = $_POST['karta_kredytowa'];

    $mysqli -> query("INSERT INTO passworddb(password) VALUES('$password')") or
    die($mysqli->error);

    $_SESSION['messege'] = "Pomyślnie zapisano rekord";
    $_SESSION['msg_type'] = "success";

    header("location: index.php");
}
if (isset($_GET['delete'])){
    $id = $_GET['delete'];
    
    $mysqli->query("DELETE FROM passworddb WHERE id=$id") or die($mysqli->error);

    $_SESSION['messege'] = "Pomyślnie usunięto rekord";
    $_SESSION['msg_type'] = "danger";

    header("location: index.php");
}

if(isset($_GET['edit'])){
$id = $_GET['edit'];
$update = true;
$result = $mysqli->query("SELECT * FROM passworddb WHERE id=$id") or die($mysqli->error);
if ($result->num_rows){
    $row = $result->fetch_array();
    $password = $row['password'];
}
}
if (isset($_POST['update'])){
    $id = $_POST['id'];
    $miejsce = $_POST['password'];

    $mysqli-> query("UPDATE passworddb SET password='$password' WHERE id=$id") or die($mysqli->error);
    $_SESSION['messege'] = "Pomyślnie zaktualizowano rekord";
    $_SESSION['msg_type'] = "waring";

    header('location: index.php');
}
?>