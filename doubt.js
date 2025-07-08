// Mero doubt chai bichako code chai kinw skip hunca?

// for the examples hami snga auta varaible cha.
var a = 8;
console.log(a); // 8;
// next one;
console.log(b); // undefined;
var b = 5;

// But tyai case function ma pani cha. a ra b ko value last ma pass
// vako cha tyo sum() call vaye sake pachi paramater ma chai value pass vako cha.
// Bichako part chai console.log() chia kasari skip hunca?
function sum(char) {
  console.log(char); // a;
}
sum("a");
