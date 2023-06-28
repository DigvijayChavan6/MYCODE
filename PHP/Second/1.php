<html>
    <body>
        <form action="eight.php" method="post">
            Enter any number:<input type="text" name="arm"><br>
            <input type="submit" value="CHECK" name="re">
        </form>
    </body>
</html>
<?php
    if(isset($_POST['re'])){
        $t=$n=$_POST['arm'];
        $sum=0;
        while($n>0){
            $r=$n%10;
            $sum=$sum+$r*$r*$r;
            $n=$n/10;
        }
        if($t==$sum){
            echo "<br>Entered no. is Armstrong";
        }
        else{
            echo "<br>Entered no. is NOT Armstrong";
        }
    }
?>