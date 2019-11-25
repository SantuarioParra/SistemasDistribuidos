class jugador {
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
  setGamePiece(char inputPiece){
    var indx = window.piezas.findIndex(inputPiece)
    var pieza = window.piezas.find(indx)
    //validar que la pieza no está ocupada
    if (true) {
      console.log("condicion de validar no ocupada");
    }
  }
  setOwnedProperty(inputIndex){
    this.propiedades[inputIndex] = 1
  }
  setLocation(int spaceNum){}
  setGamePieceName(inputPieceName){}
  setPixelLocation(tempLocation){}
  setMoneyAmount(int inputNum){}

  //metodos
  mover(movidas){
    this.casilla = (this.casilla + movidas) % 40
  }
}
