#include <stdio.h>
int main()
{
    char name[10], post[30];
    float salaray;

    // let's  create  the file;
    FILE *file;
    file = fopen("document.txt", "w");
    // Store a multiple data by using the loop;
    printf("Enter the name, post and salary: ");
    scanf("%s %s %f", name, post, &salaray);
    fprintf(file, "%s %s %.2f\n", name, post, salaray);
    fclose(file);

    // for read the file;
    FILE *fp;
    fp = fopen("document.txt", "r");
    printf("Name\tPost\tSalary\n");

    while (fscanf(fp, "%s %s %f", name, post, &salaray) != EOF)
    {
        printf("%s\t%s\t%.2f\n", name, post, salaray);
    }
    return 0;
}