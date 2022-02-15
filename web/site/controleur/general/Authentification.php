<?php

function verif_connexion() {
    if(isset($_COOKIE['Jeton'])){
        require("./modele/connexion.php");

        $_SESSION['profil'] = array();

        if($resultat > 0) {
            $date = $resultat[0]['DateMaxJeton'];

            if($date > date('Y-m-d h:i:s', time())) {
                $_SESSION['profil'] = $resultat[0];
                return true;
            }
        }
    }
    return false;
}
?>


