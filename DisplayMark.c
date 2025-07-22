#include <stdio.h>
#include <string.h>
// write a program to print the display value of the student name,id,age,class,mark; 
struct DisplayStudent
{
    /* data */
    char name[30];
    int id; 
    float mark;
    
};

int main() {
    // Declare a varaible of the type struct students; 
    struct DisplayStudent TrashKoshi; //mero marji ma j sukai variable rakhum 
    
    // Assing the value to the members; 
    strcpy(TrashKoshi.name,"koshiTrash");
    TrashKoshi.id = 589;
    TrashKoshi.mark = 65.7;

    // Printing;
    printf("Your name is : %s\n",TrashKoshi.name);
    printf("Your id is : %d\n",TrashKoshi.id);
    return 0; 
}