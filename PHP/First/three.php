<?php
    function fun(){
        static $a=0;
        echo "<br>Value of a is $a";
        $a++;
    }
    fun();
    fun();
    fun();
?>