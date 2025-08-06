#include <stdio.h>
int main() {
    char name[10],post[10];
    float salaray;

    // let's  create  the file; 
    FILE *file;   
    file = fopen("document.txt","w");
    printf("Enter the name,post and salary = ");
    scanf("%s,%s,%f",&name,&post,&salaray);
    fprintf(file,"%s,%s,%f",name,post,salaray);
    fclose(file);
    return 0;
}