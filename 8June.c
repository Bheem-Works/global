// Here will be the cs class Home works. 
// find the even by using the loops in the arrays; 
// print the all value of the array by using the loops; 
#include <stdio.h> 
int name_array();
int evenFunction();
int main () {
  evenFunction();
  name_array();
  return 0;
}

int evenFunction() {
  int even_arr [4] = {1,2,3,4};
  for(int i = 0; i <=4; i++) {
    if(i % 2 == 0){
      printf("%d",i);
    }
  }
}

int name_array() {
  int name[10][5] = {"A","B","C","D"}; // respected dai btw haha. 
  for(int i = 0; i < 5; i++) {
    printf("%s",name[i]);
  }
}
