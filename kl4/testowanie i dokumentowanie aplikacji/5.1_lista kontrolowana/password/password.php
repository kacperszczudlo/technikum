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
<?php require_once 'passwordprocess.php'; ?>

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
    $mysqli = new mysqli('localhost', 'root','','passworddb') or die(mysqli_error($mysqli));
    $result = $mysqli -> query ("SELECT  * FROM passworddb") or die ($mysqli->error);
?>
<a href="../index.html"><img src="../images/home.png" id="home" alt="home"></a>
    <div class="row justify-content-center">
        <table class="table">
            <thead>
                <tr>
                    <th>password</th>
                    <th colspan="2">action</th>
                </tr>
            </thead>
<?php
            while ($row = $result->fetch_assoc()): ?>
                <tr>
                    <td><?php echo $row['password']; ?></td>
                    <td>
                        <a href="passworddb.php?edit=<?php echo $row['id']; ?>">
                        <button class="btn" name="edit">Edit</button></a>
                        <a href="passwordprocess.php?delete=<?php echo $row['id']; ?>">
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
    <form action="passwordprocess.php" name="form" method="POST">
        <input type="hidden" name="id" value="<?php echo $id; ?>">
         
        <div class="form-group">
            <label>password</label>
            <input type="text" name="password" class="form-control" 
            value="<?php echo $password; ?>" placeholder="wpisz password">
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