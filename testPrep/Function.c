// the question must be asked to find out the fibonacci or the factorials numbers right?? 

#include <stdio.h>
int factorial(int n);
//   ^---fn()--- ^^----> this is the arguments; 
int main() {
    int n; 
    printf("write the factorial numbers = ");
    scanf("%d",&n);
    // ^---> taking the input value by using the scanf; 
    factorial(n);
    //        ^----> Passing the value; 
    return 0;
}

int factorial(int n){
         //    ^^^^----> Passing the arguments; 
    int fact = 1; // |-> Seting the default value to the 1;  

    for(int i = 1; i <= n ; i++){
        fact *= i; // Multiplying the index N of times; 
        // For examples; n = 2; 2 * 1 , 2 * 2 like this.
    }
    printf("%d",fact); // Output show = 
    return fact;
    // returning the fact; 
}