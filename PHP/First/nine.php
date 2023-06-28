<html>
    <body>
        <form action="eight.php" method="post">
            Enter any number:<input type="text" name="p"><br>
            <input type="submit" value="CHECK" name="re">
        </form>
    </body>
</html>
<?php
    if(isset($_POST['re'])){
        $n=$_POST['p'];
        $cnt=0;
        for($i=1;$i<=$n;$i++){
            if($n%$i==0){
                $cnt++;
            }
        }
        if($cnt==0){
            echo "<br>Entered no. is PRIME";
        }
        else{
            echo "<br>Entered no. is NOT PRIME";
        }
    }
?>
