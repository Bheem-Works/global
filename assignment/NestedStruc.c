#include <stdio.h>
int arrayStruct(); 
struct Lg {
    char modelName[40];
    int model;
};

struct dell{
    //  ||------------------------------------------|    
    char dell_model;          //                    |
                                //                  |
    struct Lg callLg;          //                   |
//         ||-> call the first struct(struct Lg) inside the (dell) struct; 
//  This is what we called the nested structure to call the other's stuct into the one acess and can easily acess the vlaue, properties; 
};

int main() {
    struct dell protoDell;

    protoDell.callLg.model = 20;
//    ^^       ^^    ^^^^^ -----> acessing the first struct model propeties and assigning the value;
//    ||       ||-> Acessin the 'callLg' through the nested struct. which is in the dell struct; 
//    ||-> Strcut new varaible names;   
    protoDell.dell_model = 30;

    printf("Your model number is : %d \n",protoDell.callLg.model); // output : Your model number is 20;
    arrayStruct();
    return 0;
}

int arrayStruct(){
 struct{
    char name;
    int class;
    int roll; 
 }info;

 info.roll = 30;
 printf("Your roll no is : %d \n ",info.roll);

 return 0; 
};