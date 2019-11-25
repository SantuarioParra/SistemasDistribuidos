function turno_Jugador(jugador){
  //tirar dados
  var d = rollDices()
  jugador.mover(d)
  



  if (d[0] == d[1]) {
    jugador.repeticionesTurno++
    turno_Jugador(jugador)
  }
}

function iniciarJuego(/*jugadores*/){
  var jugadores = 6
  var j = []

  for (var i = 0; i < jugadores; i++) {
    var burglar = jugador()
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
