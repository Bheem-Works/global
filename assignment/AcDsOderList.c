// Wap to enter n numbers of students (name,age,marks) and displays them in ascending and descending order according to age. 
#include <stdio.h>
// int list(); 
int accending();

int main(){
    accending();
}

int accending(){
    // creating the structure; 
    struct{
        int name[30];
        int id;
        int rank;
    } student [3]; 
    // deatail about the structure; 
    struct student; 
    strcpy(student[0].name, "vim"); 
    student[0].id = 90; 
    student[0].rank = 2;     

    // for loops for the structure; 
    for(int i = 0; i < 2; i++){
        printf("studentRank %d",student[i].rank);
    }
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
