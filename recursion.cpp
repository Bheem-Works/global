#include <iostream>
using namespace std;
// Wap a recursion.
int maximum(int i);
int recursion(int i);
// write the fabionacci sequence in the C++ by using the recursion; 
// fabionacci sequence is a sequence in which each number is the preceding sum of two each numbers; 

int fabionacci(int f);
int main(){
    int term = 4;
    cout << "fabionacci using the recursion and the if else";
    for(int i = 0; i < term; i++){
        cout << fabionacci(i) << "\n ";
    }
    return 0;   
};

int fabionacci(int f){
    if(f<=2){
        return 1;
    }else{
        return fabionacci(f-1) + fabionacci(f - 2);
    }
}

int recursion(int i){
    if(i == 0){
        return 0;
    }else{
        recursion(i-1);
        printf("run \n \n");
    }
}

int maximum(){
  int numArr[10] = {1,2,3,4,5};
  cout << numArr[4];
  return 0;
}
