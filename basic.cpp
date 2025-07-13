    #include <iostream>
    // int foo();
    int loop();
    
    int main(){
        std::cout << "Here i call functions. Hehaa! \n \n";
        loop();
        // foo(); // -> the foo functions is hideeen coz i don't want to want this to invoked.
        return 1;
    }
    
    // groups of the functions. 

    int loop(){
        for(int i = 0; i <= 5; i++){
            std::cout << i << "\n" << "miso";
        }

        return 0; // (i want to know what is 0 is doing in the return is this boolean ? true or false. does the 0 means true? what this exactly??) 
    }

    int foo(){
        std::cout << "Find out the even in number.... \n";
        int even = 4;
        if(even % 2 == 0){
            std::cout <<"this is the even number \n";
        }else {
            std::cout <<"this is the not the even number \n";
        }

        std::cout<<"trying the array inside the c; hahah";

        // don't know how to take the value?? 
        int arr[3][10] = {'foo','boo','coo','gooo'};
        std::cout << arr[2] << "here i call the second index. ";
        for(int i = 0; i < 5; i++){
            std::cout << arr[i] << "all arrays here";
        }

        return 0;
    }