<?php

function connexion() {
    require('./modele/Connexion.php');

    //Ici on met ce dont on a besoin afin de relier le modele et la vue

    require_once('./vue/connexion.tpl');
}


function accueil()
{
    require("./controleur/general/Connexion.php");

    if(isset($_SESSION['profil'])){ //Verification des infos de connexion
        if(verif_utilisateur($_SESSION['profil'][0], $_SESSION['profil'][1], $resultat) == false){ //regarder si les tableaux des profils marchent bien comme ca
            
            //nous permet d'utiliser du contenu marketplace specifique sinon on le fait pas
            
        }
    }
    
    require ('./modele/marketplace.php');

        echo 'salut visiteur';
       //cette fonction affichera les scripts disponibles de la marketplace
       // scripts_disponibles($scripts);

       //affichera la liste des scritps disponibles 
       require('./vue/abonnes/accueil.tpl');
}



?>