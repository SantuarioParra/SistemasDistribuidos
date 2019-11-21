/*Grid*/
window.height = 1594;
window.width = 1600;

console.log(window.height)
console.log(window.width)

$("#board").click(function (e) {
  var posX = $(this).position().left,
  posY = $(this).position().top;

  var X = e.pageX - posX;
  var Y = e.pageY - posY;

  console.log(X);
  console.log(Y);

  //Eje X
  var flagX = 0
  if (X >= 0 && X <= 214) {
    flagX = 1
  }
  else if (X >= 215 && X <= 345) {
    flagX = 2
  }
  else if (X >= 346 && X <= 476) {
    flagX = 3
  }
  else if (X >= 477 && X <= 604) {
    flagX = 4
  }
  else if (X >= 605 && X <= 734) {
    flagX = 5
  }
  else if (X >= 735 && X <= 865) {
    flagX = 6
  }
  else if (X >= 866 && X <= 997) {
    flagX = 7
  }
  else if (X >= 988 && X <= 1126) {
    flagX = 8
  }
  else if (X >= 1127 && X <= 1259) {
    flagX = 9
  }
  else if (X >= 1260 && X <= 1384) {
    flagX = 10
  }
  else if (X >= 1385 && X <= 1600) {
    flagX = 11
  }
  console.log("X: "+flagX)

  //Eje Y
  var flagY = 0
  if (Y >= 0 && Y <= 214) {
    flagY = 1
  }
  else if (Y >= 215 && Y <= 345) {
    flagY = 2
  }
  else if (Y >= 346 && Y <= 476) {
    flagY = 3
  }
  else if (Y >= 477 && Y <= 604) {
    flagY = 4
  }
  else if (Y >= 605 && Y <= 734) {
    flagY = 5
  }
  else if (Y >= 735 && Y <= 865) {
    flagY = 6
  }
  else if (Y >= 866 && Y <= 997) {
    flagY = 7
  }
  else if (Y >= 988 && Y <= 1126) {
    flagY = 8
  }
  else if (Y >= 1127 && Y <= 1259) {
    flagY = 9
  }
  else if (Y >= 1260 && Y <= 1384) {
    flagXY= 10
  }
  else if (Y >= 1385 && Y <= 1594) {
    flagXY= 11
  }
  console.log("Y: "+flagY)
  /*
  if (flagX==1 and flagY==1) {
    console.log("Free parking")
  }
  else if (flagX==2 and flagY==1) {
    console.log("Strand")
  }
  else if (flagX==3 and flagY==1) {
    console.log("Chance")
  }
  else if (flagX==4 and flagY==1) {
    console.log("Fleet Street")
  }
  else if (flagX==5 and flagY==1) {
    console.log("Trafalgar Square")
  }
  else if (flagX==6 and flagY==1) {
    console.log("Fenchurch St. Station")
  }
  else if (flagX==7 and flagY==1) {
    console.log("Leicester Square")
  }
  else if (flagX==8 and flagY==1) {
    console.log("Conventry Street")
  }
  else if (flagX==9 and flagY==1) {
    console.log("Water Works")
  }
  else if (flagX==10 and flagY==1) {
    console.log("Piccadilly")

  }
  else if (flagX==11 and flagY==1) {
    console.log("Go to jail mofo!")

  }
  else if (flagX==1 and flagY==2) {
    console.log("Vine Street")

  }
  else if (flagX==1 and flagY==11) {
    console.log("Regent Street")
  }
  */

});
