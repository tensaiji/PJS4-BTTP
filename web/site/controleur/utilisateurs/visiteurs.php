<?php
//Le contenu de ce fichier à été déplacé dans General.php afn de ne pas avoir a require plusieurs fichiers dans l'index
function accueil()
{

    //cette fonction affichera les scripts disponibles de la marketplace
    // scripts_disponibles($scripts);

    require('./vue/visiteurs/accueil.tpl');
}

function inscription()
{
    require_once('./modele/inscription.php');

    $msg = "";

    if (count($_POST) < 3) {
        require('./vue/visiteurs/inscription.tpl');
    } else {
        $pseudo = $_POST['pseudoInscription'];
        $mdp = $_POST['mdpInscription'];
        $mdp2 = $_POST['mdp2Inscription'];
        if (verif_inscription($pseudo)) {

            $msg = "compte déjà existant";
            require('./vue/visiteurs/inscription.tpl');
            echo $msg;
        } else if ($mdp != $mdp2) {

            $msg = "Resaisissez votre mot de passe";

            

            require('./vue/visiteurs/inscription.tpl');
            echo $msg;
        } else {

            insertion_bd($pseudo, $mdp);

            require_once('./modele/connexion.php');

            verif_utilisateur($pseudo, $mdp);

            $_SESSION['pseudo'] = $pseudo;
            $_SESSION['mdp'] = $mdp;
            

            $url = "?controle=abonnes&action=accueil";

            header("Location:" . $url);
        }
    }
}

function connexion()
{
    require_once('./modele/connexion.php');

    //Ici on met ce dont on a besoin afin de relier le modele et la vue

    require_once('./vue/connexion.tpl');
}

function marketplace()
{

    require_once './modele/marketplace.php';

    $scriptsRecuperes = scripts_publiques();

    require_once './vue/visiteurs/marketplace.tpl';


    echo '<div class="container py-5 bg-light">';
    echo '<div class="row">';


    foreach ($scriptsRecuperes as $script) {
        echo ('<div class="col-md-4 col-sm-4">');
        echo ('<div class="card mb-4 shadow-sm">');
        echo ('<div class="card-body">');
        $i = 0;
        foreach ($script as $scr => $s) {
            if ($i == 0) {
                echo '<p class="card-text"> Nom : ' . $s . '</p>';
            }
            if ($i == 1) {
                echo '<p class="card-text"> Date de publication : ' . $s . '</p>';
            }
            if ($i == 2) {
                echo '<p class="card-text"> Version : ' . $s . '</p>';
            }
            if ($i == 3) {
                $toShow = $s;
            }
            $i++;
        }
        echo '<a href="controleur/general/download.php?file=' . $toShow . '"><button class="btn btn-sm btn-outline-secondary"">Telecharger</button></a>';


        echo '<a href="?controle=visiteurs&action=code_source&file=' . $toShow . '" target="_blank"><button type="button" class="btn btn-sm btn-outline-secondary"> Code source </button></a>';
        echo '</div>';
        echo '</div>';
        echo '</div>';
    }
    echo '</div>';
    echo '</div>';
}

function montrer_code()
{
    require_once './vue/visiteurs/codeSource.tpl';
    require_once './modele/marketplace.php';

    $source = code_source();

    //TODO rajouter le html


}
function produits()
{

    require './vue/visiteurs/produits.tpl';
}

function informations()
{

    require './vue/visiteurs/informations.tpl';
}
