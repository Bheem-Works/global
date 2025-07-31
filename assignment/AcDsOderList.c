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
        char name[30];
        int id;
        int rank;
    } student [3]; 
    // deatail about the structure; 
    strcpy(student[0].name, "vim"); 
    student[0].id = 90; 
    student[0].rank = 2;     

    // seconds value; 
    strcpy(student[1].name, "thupa");
    student[1].id = 0; 
    
    // for loops for the structure; 
    // for(int i = 0; i < 2; i++){
    //     printf("studentRank %d",student[i].rank);
    //     printf("studentId %d",student[i].rank);
    // }

    // explaining the accending oders;
    int storeOder;
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(student[i] > student[j]){
                storeOder = student[i]; 
                student[i] = student[j];  
                student[j] = storeOder; 
            }
        }
    }
    // print; 
    for(int i = 0; i < 4; i++){
        printf("%d",student[i]);
    }
    return 0;
}
