//Clases

class Jugador {
  constructor() {
    this.dinero = 2500
    this.nombre = "CharlesXavier"
    this.casilla = 0
    this.vida = 1
    this.propiedades = new Array(40)
    this.repeticionesTurno = 0
  }
  //setters
  setPlayerName(inputName){
    this.nombre = inputName
  }
  setGamePiece(inputPiece){
    var indx = window.piezas.findIndex(inputPiece)
    var pieza = window.piezas.find(indx)
    //validar que la pieza no está ocupada
    if (true) {
      console.log("condicion de validar no ocupada")
    }
  }
  setOwnedProperty(inputIndex){
    this.propiedades[inputIndex] = 1
  }
  setLocation(spaceNum){}
  setGamePieceName(inputPieceName){}
  setPixelLocation(tempLocation){}
  setMoneyAmount(inputNum){}

  //metodos
  mover(movidas){
    this.casilla = (this.casilla + movidas) % 40
  }
}

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
    burglar = new Jugador()
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
