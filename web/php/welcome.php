<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    echo "hello amogha k <br>";
    $servername="localhost";
    $username="root";
    $password="#Avengers12";

    // create a connection
    $conn =mysqli_connect( $servername,$username,$password); 

    echo" connection was succesfull";
    ?>
</body>
</html>