// Write a program to find the cube root of a number; 

#include <stdio.h>
int main() {
    int num; 
    printf("Enter the number = ");
    scanf("%d", &num);
    int cubeRoot = num * num * num;
    printf("Your cube number is the %d", cubeRoot);
    return 0; 
}

