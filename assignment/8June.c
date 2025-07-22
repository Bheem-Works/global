// Here will be the cs(computer science) class Home works. 

// find the even by using the loops in the arrays; 
// print the all value of the array by using the loops; 

#include <stdio.h>
#include <string.h>
int name_array();
int evenFunction();
int college();

int main () {
  college();
  return 0;
}

int college () {
  char isNight[20] = "20July";
  if(strcmp(isNight, "20July") == 0){
    printf("Tommrow is no college");
  }
  return 0;
}

int evenFunction() {
  int even_arr [4] = {1,2,3,4};
  for(int i = 0; i <=4; i++) {
    if(i % 2 == 0){
      printf("%d\n",i);
    }
  }
}

int name_array() {
  char *name[] = {"A","B","C","D"}; // used the * infinity pointers. And used the char for the strings;  
  for(int i = 0; i < 5; i++) {
    printf("%s\n",name[i]);
  }
}
