<!DOCTYPE html>
<html>
	<head>
		<meta charset="UTF-8">
		<title>El monopolio</title>
		<link rel="stylesheet" href="CSS/custom.css">
		<link rel="stylesheet" href="CSS/main.css">
		<!--link href="https://fonts.googleapis.com/css?family=Roboto:100,300,400,500,700,900" rel="stylesheet">
  	<link href="https://cdn.jsdelivr.net/npm/@mdi/font@4.x/css/materialdesignicons.min.css" rel="stylesheet">
  	<link href="https://cdn.jsdelivr.net/npm/vuetify@2.x/dist/vuetify.min.css" rel="stylesheet">
		<script src="https://cdn.jsdelivr.net/npm/vue@2.x/dist/vue.js"></script>
  	<script src="https://cdn.jsdelivr.net/npm/vuetify@2.x/dist/vuetify.js"></script>
		<script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/core.js"></script-->
		<script src="src/scripts/jQuery.js"></script>
		<script src="src/scripts/clases.js"></script>
		<script src="src/scripts/scripts.js"></script>

  	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no, minimal-ui">
	</head>
	<body>
		<div id="mainDiv">
			<div class="w3-sidebar w3-bar-block" style="display:none" id="mySidebar">
				<button onclick="cerrar()" class="w3-bar-item w3-button w3-large">Ocultar &times;</button>

			</div>
			<div id="mainDiv_dyn">
				<button onclick="abrir()" type="submit" id="side_btn" class="boton_side"><img src="CSS/Iconos/analytics64.png"></button>
				<img id="board" src="src/img/monopoly-board-web.jpg">
			</div>
		</div>
  </body>
	<script src="src/scripts/grid.js"></script>
</html>
