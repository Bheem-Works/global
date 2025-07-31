let numbers = [1, 2, 3, 50];
let max = numbers[0]; // 1; 

for (let i = 0; i < numbers.length; i++) {

  console.log('numbersArrayValue = ', numbers[i]); // [1] -> [2] -> [3] -> [50];
  console.log('loopMax -> ', max); // 1 -> conditions does not match -> 1 -> conditions matched -> 2 -> 3; 

  if (numbers[i] > max) {

    console.log(`numbers ${numbers[i]}`); // 1 -> 2 -> 3 -> 50;
    console.log(` if max : ${max}`); //  1 -> 2 -> 3; // += before assigning to the down below code; 
    max = numbers[i]; // here max value is getting updated; 
    console.log(`after if max: ${max}`); // 2 -> 1 = 1; 
  }

  console.log("break"); // if Conditions does not matched; 
}

console.log("largestNumber", max); // largest number = 50; 

console.log("Another one ======== \n \n ")

// having a github big problem stuck. huhu

