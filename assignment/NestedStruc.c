#include <stdio.h>
#include <string.h>
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
    // write it through the arrays and store it. 
 struct{
    char name[40]; // -> 'vim','miso','aming'
    int class; // -> 12; 
    int roll; // -> 3,5,8,18;
 }info[3];

 // 0 index values;
 strcpy(info[0].name,"vim"); 
 info[0].class = 12;
 info[0].roll = 3; 

// 1 index values; 
 strcpy(info[1].name,"miso"); 
 info[1].roll = 5; 

 // 2 index values; 
 strcpy(info[2].name,"aming"); 
 info[2].roll = 8; 

 // 3 index values; 
 info[3].roll = 18; 

 for(int i = 0; i < 3; i++){
    // Note : Can not print all the value just by using the %d and the %s. It will not work coz printf only print a single statement at the one time. 
     printf("Index %d, Name:%s, Class:%d,Roll:%d \n ",i,info[i].name,info[i].class,info[i].roll);
//     ^^^ ---> Output : index:1,2,3 , Name:'miso','aming','vim' , Class : 12, Roll no : 3,5,8,18; 
 }

 return 0; 
};