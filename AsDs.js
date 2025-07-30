// Find out the accending and the descending oders; 

let array = [1,2,3,4];
let storeNumber = []; 

for(let i = 0; i < array.length; i++){
    for(let j = 0; i < array.length; j++){

        if(array[i] > array[j]){
            console.log("it is runnign man okay?");
            storeNumber = array[i];
            array[i] = array[j];
            array[j] = storeNumber;
        }
    }    
}