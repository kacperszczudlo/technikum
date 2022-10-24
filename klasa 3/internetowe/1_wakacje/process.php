<?php
session_start();

$mysqli = new mysqli('localhost', 'root','','miejscawakacji') or die(mysqli_error($mysqli));

$id = 0;
$update = false;
$miejsce = '';
$cena = '';
$data = '';

if (isset($_POST['save'])){
    $miejsce = $_POST['miejsce'];
    $cena = $_POST['cena'];
    $data = $_POST['data'];

    $mysqli -> query("INSERT INTO miejscawakacji(miejsce, cena, data) VALUES('$miejsce','$cena', '$data')") or
    die($mysqli->error);

    $_SESSION['messege'] = "Pomyślnie zapisano rekord";
    $_SESSION['msg_type'] = "success";

    header("location: index.php");
}
if (isset($_GET['delete'])){
    $id = $_GET['delete'];
    
    $mysqli->query("DELETE FROM miejscawakacji WHERE id=$id") or die($mysqli->error);

    $_SESSION['messege'] = "Pomyślnie usunięto rekord";
    $_SESSION['msg_type'] = "danger";

    header("location: index.php");
}

if(isset($_GET['edit'])){
$id = $_GET['edit'];
$update = true;
$result = $mysqli->query("SELECT * FROM miejscawakacji WHERE id=$id") or die($mysqli->error);
if ($result->num_rows){
    $row = $result->fetch_array();
    $miejsce = $row['miejsce'];
    $cena = $row['cena'];
    $data = $row['data'];
}
}
if (isset($_POST['update'])){
    $id = $_POST['id'];
    $miejsce = $_POST['miejsce'];
    $cena = $_POST['cena'];
    $data = $_POST['data'];

    $mysqli-> query("UPDATE miejscawakacji SET miejsce='$miejsce', cena='$cena', data='$data' WHERE id=$id") or die($mysqli->error);
    $_SESSION['messege'] = "Pomyślnie zaktualizowano rekord";
    $_SESSION['msg_type'] = "waring";

    header('location: index.php');
}
?>