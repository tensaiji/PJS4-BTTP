<html>
<head>
    <meta charset="UTF-8">

    <title> Bienvenue </title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
    <link rel="stylesheet" type="text/css" href="https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/4.3.1/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/twitter-bootstrap/4.3.1/js/bootstrap.bundle.min.js"></script>
    <link href="https://cdnjs.cloudflare.com/ajax/libs/magnific-popup.js/1.1.0/magnific-popup.min.css" rel="stylesheet" />
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" />
	<link href="https://fonts.googleapis.com/css?family=Raleway&display=swap" rel="stylesheet" />
    <link rel="stylesheet" type="text/css" href="./style.css">
  </head>

<body style="background-color:#003459">
	<div class="container-fluid banner">
		<div class="row">
			<div class="col-md-12">
				<nav class="navbar navbar-md">
					<ul class="nav">
						<li class="nav-item" style="padding-left:10%; padding-top:0%">
							<a class="navbar-brand" href="?controle=abonnes&action=accueil"><img alt="Brand" src="./vue/logo.png" style="width:140px"></a>
						</li>
					</ul>
					<ul class="nav" style="padding-right:0%; padding-top:0%">
						<li class="nav-item">
							<a class="nav-link" href="?controle=abonnes&action=profil">Profil</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="?controle=abonnes&action=appareils"> Appareils </a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="?controle=abonnes&action=marketplace"> Marketplace </a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="?controle=abonnes&action=informations">Informations</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="?controle=abonnes&action=deconnexion">Déconnexion</a>
						</li>
					</ul>
				</nav>
			</div>
        </div>

        <h2 style="text-align : center; padding-top:3%;"> Votre profil </h2> 

        <div class="row" style="padding-top:3%">
            <div class="col-md-12" style="padding-left:10%; padding-right: 10%; margin-left:auto; margin-right:bottom">
                <p> Pseudo : <?php echo $_SESSION['pseudo']?> </p> 

                <p> Consulter la page <a href="?controle=abonnes&action=appareils"; style="color:#00A8E8"> Appareils </a> pour gérer vos terminaux </p>
                <p> Vous voulez changer de mot de passe ? </p>
				form

				<form action="?controle=visiteurs&action=changeMdp" method="post" aria-describedby="basic-addon2" style="border-radius:10px; width:30%">

					<div class="form-group">
						<p><input name="baseMdp" type="text" class="form-control" placeholder="Mot de passe actuel" autocomplete="off"
								required><br /></p>
					</div>
	
					<div class="form-group">
						<p><input name="mdpToChange" type="text" class="form-control" placeholder="Nouveau mot de passe" autocomplete="off"
								required><br /></p>
					</div>
	
					<div class="form-group">
						<input type="submit" value="Changer mot de passe" class="btn btn-primary btn-block" style="background-color:#00A8E8">
					</div>
	
				</form>
			</div>
		</div>
	</div>
</body>
