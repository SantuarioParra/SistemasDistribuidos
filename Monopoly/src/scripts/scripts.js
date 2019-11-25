//Funciones del ocmportamiento de la plataforma

//sidebar
function abrir() {
    document.getElementById("mySidebar").style.width = "100%";
    document.getElementById("mySidebar").style.display = "block";
}

function cerrar() {
    document.getElementById("mySidebar").style.display = "none";
}

//Funciones del Monopoly

function turno_Jugador(jugador){
  //mover
  var d = rollDices()
  jugador.mover(d)

  //decidir
  console.log("chekpoint!");
  if (true) {

  }



  if (d[0] == d[1]) {
    jugador.repeticionesTurno++
    turno_Jugador(jugador)
  }
}

function iniciarJuego(/*jugadores*/){
  var jugadores = 6
  var j = []

  for (var i = 0; i < jugadores; i++) {
    var burglar = new Jugador()
    j.push(jugador)
  }

  //ciclo de turnos
  var j = 0
  var continuar = true;
  while (continuar) {
    j++

    for (var i = 0; i < j.length; i++) {
      turno_Jugador(j[i])
    }

    if (j == 2) {
      continuar = false
    }
  }
}

function rollDices(){
  var d1 = Math.floor((Math.random() * 6) + 1)
  var d2 = Math.floor((Math.random() * 6) + 1)

  var dados = [d1, d2]

  return dados
}

/* INICIO DE LOS EVENTOS PARA EL JUEGO */
iniciarJuego()
/* ----------------------------------- */
