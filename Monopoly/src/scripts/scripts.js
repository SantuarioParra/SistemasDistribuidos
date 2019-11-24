function turno_Jugador(jugador){
  //tirar dados
  var d = rollDices()
  moverPieza(jugador, d)

}

function iniciarJuego(/*jugadores*/){
  var jugadores = 6
  var j = []

  for (var i = 0; i < jugadores; i++) {
    j[i] = jugador()
  }

  var j = 0
  var continuar = true;
  while (continuar) {

  }
}











function rollDices(){
  var d1 = Math.floor((Math.random() * 6) + 1)
  var d2 = Math.floor((Math.random() * 6) + 1)

  var dados = [d1, d2]

  return dados
}

function moverPieza(jugador, pos){
  dados = rollDices()

  //mover pieza
  var l = pos + dados[0] + dados[1]
}

console.log(rollDices())


/* INICIO DE LOS EVENTOS PARA EL JUEGO */
iniciarJuego()
/* ----------------------------------- */
