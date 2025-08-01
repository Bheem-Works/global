#include <stdio.h>
// wap for find out the factorial numbers; 
// Recursion function 
int foo(int i);
int main() {
    // Your code here
    int userInput; 
    printf("enter te positive numbers");
    scanf("%d",&userInput);
    printf("Factorial of the percent %d =%ld",userInput,fac(userInput));
    return 0;
}

int foo(int i){
    if(i == 0){
        return 0;
    }else {
        printf("Recursion is working \n");
        foo(i - 1);
    }

}

// 2 factorial 
// 2,4,8,10,20

// fibonacii