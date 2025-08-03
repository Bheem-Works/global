#include <stdio.h>
int fibonacci(int n){
    if(n <= 0){
        return 0; 
    }else if(n == 1){
        return 1;
    }else{
        int a = 0,b = 1, result = 0; 
        for(int i = 2; i <= n; i++){
            result = a + b; // 0 + 1; 
            a = b; // 1 -> 0; 
            b = result; // 0 -> 0; 
        }
        return result; 
    }
}
int main() {
    int n; 
    n = 4; 
    fibonacci(n);
    printf("%d",fibonacci(n));
    return 0; 
}