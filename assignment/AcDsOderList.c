#include <stdio.h>
// int list(); 
int accending();

int main(){
    // list();
    accending();
}

int accending(){
    // creating the structure; 
    struct student{
        int name[30];
        int id;
        int rank;
    }; 
    // deatail about the structure; 
    struct student bidarthi; 
    bidarthi.id = 90; 
    
    // This will be the accending oder 
    int oder[4] = {3,2,1,0};
    int storeOder;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(oder[i] > oder[j]){
                storeOder = oder[i]; // it will direcltly store to the store array; no use of it
                oder[i] = oder[j]; // store to the i it may be used; 
                oder[j] = storeOder; // store it to the j and it also may used; 
            }
        }
    }
    // print; 
    for(int i = 0; i < 4; i++){
        printf("%d",oder[i]);
    }
    return 0;
}

// int list(){
//     // created a structure to store the different data types value; 
//     struct {
//         char name [10];
//         int age; 
//         int id;
//     }student[3]; 

//     // Loops for enter the input to the structure variables; 
//     for(int i = 0; i < 3; i++){
//         printf("Enter the asked value \n");
//         // Name ---------; 
//         printf("Your name:");
//         scanf("%s &name \n"); 

//         // age 
//         printf("enter your age");
//         scanf("%d &age\n"); 
//     }
// }
