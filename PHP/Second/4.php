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
        if(strrev($_POST['st'])==$_POST['st']){
            echo "<br>String is PALINDROME";
        }
        else{
            echo "<br>String is NOT PALINDROME";
        }
    }
?>