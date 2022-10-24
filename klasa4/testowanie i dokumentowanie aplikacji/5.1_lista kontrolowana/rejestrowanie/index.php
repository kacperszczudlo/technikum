<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="../style.css">
    <title>PHP CRUD</title>
</head>
<body>
<?php require_once 'process.php'; ?>

<?php 
if (isset($_SESSION['messege'])): 
?>
<div class="alert alert-<?=$_SESSION['msg_type']?>">

<?php
    echo $_SESSION['messege'];
    unset($_SESSION['messege']);
?>
</div>
<?php endif ?>
    <div class="container">
<?php
    $mysqli = new mysqli('localhost', 'root','','szkola') or die(mysqli_error($mysqli));
    $result = $mysqli -> query ("SELECT  * FROM szkola") or die ($mysqli->error);
?>
<a href="../index.html"><img src="../images/home.png" id="home" alt="home"></a>
    <div class="row justify-content-center">
        <table class="table">
            <thead>
                <tr>
                    <th>zainteresowania</th>
                    <th>wykształcenie</th>
                    <th>wiek</th>
                    <th>karta kredytowa</th>
                    <th colspan="2">action</th>
                </tr>
            </thead>
<?php
            while ($row = $result->fetch_assoc()): ?>
                <tr>
                    <td><?php echo $row['zainteresowania']; ?></td>
                    <td><?php echo $row['wyksztalcenie']; ?></td>
                    <td><?php echo $row['wiek']; ?></td>
                    <td><?php echo $row['karta_kredytowa']; ?></td>
                    <td>
                        <a href="rejestrowanie.php?edit=<?php echo $row['id']; ?>">
                        <button class="btn" name="edit">Edit</button></a>
                        <a href="process.php?delete=<?php echo $row['id']; ?>">
                        <button class="btn" name="delete">Delete</button></a>
                    </td>
                </tr>
<?php endwhile; ?>
        </table>
    </div>

<?php
    function pre_r($array) {
        echo '<pre>';
        print_r($array);
        echo '</pre>';
    }   
?>
    <div class="row justify-content-center">
    <form action="process.php" name="form" method="POST">
        <input type="hidden" name="id" value="<?php echo $id; ?>">
         
        <div class="form-group">
            <label>zainteresowania</label>
            <input type="text" name="zainteresowania" class="form-control" 
            value="<?php echo $zainteresowania; ?>" placeholder="wpisz zainteresowania">
        </div>
           
        <div class="form-group">
            <label>wykształcenie</label>
            <input type="text" name="wyksztalcenie" class="form-control" 
            value="<?php echo $wyksztalcenie; ?>" placeholder="wpisz wykształcenie">
        </div>          

        <div class="form-group">
            <label>wiek</label>
            <input type="text" name="wiek" 
            value="<?php echo $wiek; ?>" placeholder="wpisz wiek">
        </div>
        <div class="form-group">
            <label>karta kredytowa</label>
            <input type="text" name="karta_kredytowa" 
            value="<?php echo $karta_kredytowa; ?>" placeholder="wpisz kartę kredytową">
        </div><br>            

        <div class="form-group"> 
            <?php
            if ($update == true):
            ?>
                <button type="submit" class="btn btn-info" name="update">zaktualizuj</button>
            <?php else: ?>
                <button type="submit" class="btn btn-primary" name="save">zapisz</button>
            <?php endif; ?>
        </div>
        
    </form>
    </div>  
    </div>  
</body>
</html>