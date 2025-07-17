#include <stdio.h>
// Recursion function 
int foo(int i);
int main() {
    // Your code here
    int i = 3;
    foo(i);
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