//  Note ----
/*
{ // Note : What is pointer? Pointer is a variable where we can store the adress of any other's varaibels adress. 
// Syntax  = * (pointer must have the module symbol);
// int a = 4; 
// int *b = &a; 
//     |    ^--> locating the adress of the a varaibles;     
//     |--> is a syntax of the pointer; 
// printf("%d",b); ---> this will print the adress  of the  b pointer; 
// printf("%d",*b); ---> this will give the value; 
}
*/

#include <stdio.h>

// Questions One -> find the sum of the numbers by using the pointers; 
int sum(){
int a = 3, b = 4; 
    int *r = &a,*t = &b;
    printf("%d",*r + *t);
}

// Questions Two -> Find the simple interest by usin the pointers; 
int simple_Intrest(){
    int p = 240,t = 2;
    float r = 2.5;
    int *principle = &p, *time = &t;
    float *rate = &r;

    int simpleInterest = ((*principle) * (*time) * (*rate)) / 100; 
    printf("SimpleInterest:%d",simpleInterest);    
}; 

// Questions Three -> Find the factorail numbers by using the pointers; 
int fraction(n){
  int fact;
  for(int i = 0; i < n; i++){
    fact *= i; 
  }
  return fact;
    printf("Factorial numbes : %d\n",fact);
}

int main(){
    printf("\n\n");
    sum(); 

    printf("\n \n");
    simple_Intrest();

    printf("\n \n");
    int n; 
    printf("Enter the factorial number:\n");
    scanf("%d",&n);
    fraction(n);
}
