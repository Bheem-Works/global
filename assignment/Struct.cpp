#include <iostream>
#include <string>
int singleStruct();
int multipleStruct();
using namespace std;

struct vim{
    int myRank;
};

int main(){
    // Calling the single input variable;
    multipleStruct();

    return 0; // --> 0 => true; it works;  
}

//  multiple structure variable;
int multipleStruct(){
    struct{
        string brand;
        string model;
        int year;
    }myCar1,myCar2; // Created a mutiple variables and give the seprate value to each one;

    // Seting the value to the myCar1  variable;
    myCar1.brand = "miso";
    myCar1.model = "uioz";
    myCar1.year = 189;
    
    // Seting the value to the myCar2 variable;



    // print**
    cout << myCar1.brand << " " << myCar1.model << " \n" ;

    return 0;
};

// Single structure variable;
int singleStruct(){
    struct vim miso;
    // inside the main functions; 
    struct{
        int value;
    } myValue; 
    myValue.value = 10;
    miso.myRank = 30; 

    std::cout<<miso.myRank << "\n";  
    std::cout<<myValue.value << "\n";  
    std::cout<<"this is vim";
}