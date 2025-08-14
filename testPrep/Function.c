// the question must be asked to find out the fibonacci or the factorials numbers right?? 

#include <stdio.h>
int factorial(int n);
int main() {
    int n; 
    printf("write the factorial numbers = ");
    scanf("%d",&n);

    factorial(n);
    return 0;
}

int factorial(int n){
    for(int i = 1; i <= n ; i++){
        int fact; 
        fact = n * i;
        printf("%d",fact);
    }
}