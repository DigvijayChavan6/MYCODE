<?php
    $a=array(1,2,3,4,5,6,7,8,9,10);
    echo "Even numbers are:";
    foreach($a as $val){
        if($val%2==0){
            echo " $val";
        }
    }
?>