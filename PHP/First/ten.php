<?php
    $ar=array(10,20,30,40);
    echo "<br>Length of array is ",sizeof($ar);
    echo "<br>Reversed array is :";
    foreach(array_reverse($ar) as $i){
        echo " $i";
    }
    if(in_array(30,$ar)){
        echo "<br>30 Value is present";
    }
    else{
        echo "<br>30 Value is NOT present";
    }
?>