<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
    <link rel="stylesheet" href="css/bootstrap.css">
</head>
<body>
    <div class="container-fluid">
    <?php
var_dump($_POST);
if(isset($_POST['a'])){
    $a = floatval($_POST['a']);
    $b = floatval($_POST['b']);
    $dziala = $_POST['wyb'];
    switch($dziala){
        case '+': echo "<p>{$a} + {$b} = ".($a + $b)."</p>\n";break;
        case '-': echo "<p>{$a} - {$b} = ".($a - $b)."</p>\n";break;
        case '*': echo "<p>{$a} * {$b} = ".($a * $b)."</p>\n";break;
        case '/': echo $b==0 ? "<p>{$a} / {$b} = Nie dzielimy przez 0":
         "<p>{$a} / {$b} = ".round($a / $b, 2)."</p>\n";break;
        default: echo "<p>Błędne działanie</p>";
    }
}
?>
<p><a href="cw9.html">Powrót do formularza</a>
    </div>
</body>
</html>