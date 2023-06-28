<html>
    <body>
        <form action="seven.php" method="post">
            Enter no. of units:<input type="text" name="un">
            <input type="submit" value="BILL" name="bi">
        </form>
    </body>
</html>
<?php
    if(isset($_POST['bi'])){
        $un=$_POST['un'];
        $bill=0;
        if($un>=1&&$un<=100){
            $bill=$un*10;
        }
        else if($un>=101&&$un<=200){
            $bill=($un-100)*15+100*10;
        }
        else if($un>=201&&$un<=300){
            $bill=($un-200)*20+100*15+100*10;
        }
        else{
            $bill=($un-300)*25+100*20+100*15+100*10;
        }
        echo "<br>Total Bill is $bill";
    }
?>