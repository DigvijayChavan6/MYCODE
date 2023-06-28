<?php
    $st="sangola college";
    echo "Vowels are: ";
    for($i=0;$i<strlen($st);$i++){
        $v=$st[$i];
        if($v=='a'||$v=='e'||$v=='i'||$v=='o'||$v=='u'){
            echo "$v ";
        }
    }
?>