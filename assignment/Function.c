// function with the arguments; 
#include <stdio.h>
int triva(int a, int b);

// The wrapTriva functions wrap the triva functions & take the arguments and print the result.
int wrapTriva();

int main(){
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    printf("You have entered: %d\n", userInput);
    wrapTriva();
    return 0;
}
int wrapTriva(){
    int result = triva(5, 10); // calling the function with arguments
    printf("The result of triva is: %d\n", result);
    return 0;
}
int triva(int a, int b){
    return a + b; // this function returns the sum of two integers
}