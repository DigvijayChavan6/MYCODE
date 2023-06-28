<html>
    <body>
        <form action="one.php" method="post">
            1:Addition<br>
            2:Subtraction<br>
            3:Multiplication<br>
            4:Division<br>
            Enter your choise:<input type="text" name="ch"><br>
            Enter first number:<input type="text" name="f"><br>
            Enter second number:<input type="text" name="s"><br>
            <input type="submit" value="RESULT" name="re">
        </form>
    </body>
</html>
<?php
    // $a=0;
    // $b=0;
    // $ch=0;
    // $re=0;
    if(isset($_POST['re'])){
        $a=$_POST['f'];
        $b=$_POST['s'];
        $ch=$_POST['ch'];
        switch($ch){
            case 1:
                $re=$a+$b;
                break;
            case 2:
                $re=$a-$b;
                break;
            case 3:
                $re=$a*$b;
                break;
            case 4:
                $re=$a/$b;
                break; 
            default:
                echo "<br>Enter valid choise";
        }
        echo "<br>Result is $re";
    }

?>