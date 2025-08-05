// file handling in the c; 
#include <stdio.h>
int main() {
    
    // what is the file handling ?? 
    // -> File handling is the process of managing file to store and reteirve data permanently on the 
    // external storage, allowing data to process beyond the life time of a single program executions; 
    // A file represent the secrets of the bytes; text file and the binary file 
    
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
    
    printf("file is created");
    return 0;
}