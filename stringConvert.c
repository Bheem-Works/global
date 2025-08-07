#include <stdio.h>

int string_to_number(const char *src) {
    int num;
    sscanf(src, "%d", &num);
    printf("The integer number is converted from the string: %d\n", num);
    return num; 
}
int main () {
    char b[3] = "123"; 
    string_to_number(b);
    return 0; 
}