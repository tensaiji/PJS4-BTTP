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
    <style>
		body {
			background:url('./vue/abonnes/accueilAbonnes.jpg');
			background-position: top;
			background-size:cover;
		}
	</style>

  </head>

<body>
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
			<div class="col-md-8 offset-md-2 info">
				<h1 class="text-center"> <?php echo $_SESSION['pseudo']?>, bienvenue dans ton espace personnel</h1>
				<p class="text-center">
					De nouveaux scripts sont disponibles. Consultez les dès maintenant !
				</p>
				<a href="?controle=abonnes&action=marketplace" class="btn btn-md text-center"> Découvrir</a>
			</div>
		</div>
		
		<p style="font-size:0.7em; padding-right:0; position:absolute; bottom:0">Photo by <a href="https://unsplash.com/@nasa?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">NASA</a> on <a href="https://unsplash.com/s/photos/high-tech?utm_source=unsplash&utm_medium=referral&utm_content=creditCopyText">Unsplash</a>
  
		 </p>
	</div>
</body>