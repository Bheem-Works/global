#include <stdio.h>
#include <string.h>

// write a program to print the display value of the student name,id,age,class,mark; 

struct DisplayStudent
// ^^-----> (short for structure) is a way to group the different type of data together at the one name.
{
    /* data */
    char name[30];
    int id; 
    float mark;
    
};

int main() {
    // Declare a varaible of the type struct students; 
    struct DisplayStudent TrashKoshi;// ---> representing varaibles name;  
/*    ||       ^^^ -------------^^^^ ? 
      ||                |-> DisplayStudents is a like a blue print for the actual data and TrashKoshi is the varaibles names that holds the actuall data and represent it. 
//    ||-> This is the keywords in the c that tells the compiler that you are working with the structure;       
*/
strcpy(TrashKoshi.name,"koshiTrash");
//^^^---------->  strcpy is a function is function of string.h which allows the 'string' to be copied from the one place to another; 
//          |-> it's takes the two arguments that are = (destination,source);
//                                                          ||         ^^^---> the string you want to copy
//                                                          ||-> where you want to copy the string;
    TrashKoshi.id = 589;
    TrashKoshi.mark = 65.7;

    // Printing;
    printf("Your name is : %s\n",TrashKoshi.name);// Your name is: KoshiTrash;
    printf("Your id is : %d\n",TrashKoshi.id);// Your id is : 589;

    return 0; 
}