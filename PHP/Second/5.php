<html>
    <body>
        <form action="4.php" method="post">
            Enter any String:<input type="text" name="st">
            <input type="submit" value="PALIN" name="s">
        </form>
    </body>
</html>
<?php
    if(isset($_POST['s'])){
        $st=$_POST['st'];
        $ar=array();
        for($i=0;$i<strlen($st);$i++){
            $ar.array_push($st[$i]);
        }
        echo "<br>Our string in array is",$ar;
    }
?>