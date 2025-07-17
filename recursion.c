#include <stdio.h>
// wap for find out the factorial numbers; 
// Recursion function 
int foo(int i);
 int fac(int j);
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

 int fac(int j){
    if(j >= 1){
        return j * fac(j-1);
        printf("execute tah hu nah vai");
    }else {
        return 1;
    }
}
