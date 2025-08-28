// Write a program to find out the square number of the A and the B;
#include <stdio.h>
int main() {
    int a,b; 
    printf("Enter the A number = ");
    scanf("%d", &a);
    printf("Enter the B number = ");
    scanf("%d", &b);
    int squareA = a * a;
    int squareB = b * b;
    printf("The square of A is %d\n", squareA);
    printf("The square of B is %d\n", squareB);
    return 0;
}