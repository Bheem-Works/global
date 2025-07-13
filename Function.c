#include <stdio.h>
int foo(){
    printf("this is called outside from the main functions body.");

    return 0;
}

int main(){
    foo();

    return 0;
}