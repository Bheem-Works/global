#include <stdio.h>
int sum(){
int a = 3, b = 4; 
    int *r = &a,*t = &b;
    printf("%d",*r + *t);
}

int simple_Intrest(){
    int p = 240,t = 2;
    float r = 2.5;
    int *principle = &p, *time = &t;
    float *rate = &r;

    int simpleInterest = ((*principle) * (*time) * (*rate)) / 100; 
    printf("SimpleInterest:%d",simpleInterest);    
}; 


int main(){
    sum(); 
    simple_Intrest();
}
