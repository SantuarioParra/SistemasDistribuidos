function rollDices(){
  var d1 = Math.floor((Math.random() * 6) + 1);
  var d2 = Math.floor((Math.random() * 6) + 1);

  var dados = [d1, d2];

  return dados;
}

console.log(rollDices())
