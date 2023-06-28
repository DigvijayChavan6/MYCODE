<?php
    $a=2;
    function fun(){
        global $a;
        $a++;
    }
    fun();
    echo "Value of a is $a";
?>