// file handling in the c; 
#include <stdio.h>
#include <string.h>
#define MAX_LINE 256 // Maximum length of a line in the file
int writeFile();
int fPrintf(); 
int main() {
    
    // what is the file handling ?? 
    // -> File handling is the process of managing file to store and reteirve data permanently on the 
    // external storage, allowing data to process beyond the life time of a single program executions; 
    // A file represent the secrets of the bytes; text file and the binary file 
    
    // This is for create the file ; 
    FILE* file;
//   ^^^^---> fore create the file ;      
    file = fopen("fileOne.txt","w");
//          ^^^^   ^^-----------^^ => One is for file name and another is for (w) is for creating a new file; 
//   ||     ^^^->> for create the file; 
//   ||->  file name; 
    if(file == NULL){
        printf("error is here");
        return 1; 
    }
    printf("file is created \n");
    

    // This is for reading a file ; 
    FILE* vimFile; 
    vimFile  = fopen("fileOne.txt","r");
    if(file == NULL){
        printf("error while reading the file"); 
        return 1; 
    }
    printf("the reading file is open \n");

    fclose(vimFile);
    printf("The File is closed \n"); 

    // calling the write a  string file; 
    printf("i will call the writing file");
    writeFile();

    // calling the fpintf();
    fPrintf();
    return 0;
}

// writting a string to the file;   
int writeFile(){
 FILE *fp;
    char line[MAX_LINE];
    const char *search_str = "school"; // The string to search for

    // Open the file (replace "input.txt" with your file name)
    fp = fopen("fileTwo.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    // Read the file line by line
    while (fgets(line, MAX_LINE, fp) != NULL) {
        // Search for "schol" in the current line
        if (strstr(line, search_str) != NULL) {
            // Print the entire line containing "schol"
            printf("Found 'schol' in line: %s", line);
            // Alternatively, print just "schol" if that's what you want
            // printf("%s\n", search_str);
        }
    }

    // Close the file
    fclose(fp);
}

//  fprintf()
int fPrintf(){
    struct employee {
        int age; 
        float percent; 
        char *name; 
    };

    FILE *fp; 
    struct  employee  emp[] = 
    {
    {25,65.5,'ravi'},
    {44,39.3,'sho'}
};

char *string; 
fopen("textThree.txt","w");
for(int i = 0; i < 3; i ++){
    fprintf(fp,"%d","%f","%s",emp[i].age,emp[i].percent,emp[i].name);
}
fclose(fp); 
return 0; 
}