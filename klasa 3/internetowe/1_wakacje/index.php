<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
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
    $mysqli = new mysqli('localhost', 'root','','miejscawakacji') or die(mysqli_error($mysqli));
    $result = $mysqli -> query ("SELECT  * FROM miejscawakacji") or die ($mysqli->error);
?>

    <div class="row justify-content-center">
        <table class="table">
            <thead>
                <tr>
                    <th>miejsce</th>
                    <th>cena</th>
                    <th>data</th>
                    <th colspan="2">action</th>
                </tr>
            </thead>
<?php
            while ($row = $result->fetch_assoc()): ?>
                <tr>
                    <td><?php echo $row['miejsce']; ?></td>
                    <td><?php echo $row['cena']; ?></td>
                    <td><?php echo $row['data']; ?></td>
                    <td>
                        <a href="index.php?edit=<?php echo $row['id']; ?>">
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
            <label>miejsce</label>
            <input type="text" name="miejsce" class="form-control" 
            value="<?php echo $miejsce; ?>" placeholder="wpisz miejsce wakacji">
        </div>
           
        <div class="form-group">
            <label>cena</label>
            <input type="text" name="cena" class="form-control" 
            value="<?php echo $cena; ?>" placeholder="wpisz cena wakacji">
        </div>          

        <div class="form-group">
            <label>data</label>
            <input type="date" name="data" 
            value="<?php echo $data; ?>" placeholder="wpisz data wakacji">
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