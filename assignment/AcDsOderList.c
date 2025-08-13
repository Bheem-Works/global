// Wap to enter n numbers of students (name,age,marks) and displays them in ascending and descending order according to age. 

#include <stdio.h>
int studentBio();
struct student{
        char name[10];
        int id; 
        int rank;
    };
int main() {
    studentBio();   
    return 0; 
}
int studentBio(){
    int n; 
    printf("Enter the numbers: ");
    scanf("%d",&n);

    struct student studentInfo[n];

    // Student info input; 
    for(int i = 0; i < n; i++){
        printf("\n student : %d \n ",i + 1);
        printf("Name:");
        scanf("%s",&studentInfo[i].name);
        printf("id:");
        scanf("%d",&studentInfo[i].id);
        printf("rank:");
        scanf("%d",&studentInfo[i].rank);
    }

    // bubble sorting; 
   for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        struct student temp; // maked the new varaible for store;
        if(studentInfo[i].id > studentInfo[j].id){
            temp = studentInfo[i];
            studentInfo[i] = studentInfo[j];
            studentInfo[j] = temp; 
        }
    }
   }

    // acessing the results; 
    printf("\n Acessinding the oder by id:\n");
    for(int i = 0; i < n; i++){
        printf("Nane: %s - rank: %d, id:%d\n",studentInfo[i].name,studentInfo[i].rank,studentInfo[i].id);
    }
    return 0; 
};