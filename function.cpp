    #include <iostream>
    int foo(int a, int b);
    int boo();
    int main(){
        std::cout << "This is a functions values through the arguements \n";
        foo(5, 10); // calling the function with arguments
        return 0;
    }
    int boo(){
        int a = 5, b = 10;
        foo(a, b); // calling the function with arguments
        return 0;
    }

    int foo(int x, int y){
        int sum = x + y; // this function returns the sum of two integers
        std::cout << "The result of foo is: " << sum << "\n";
        return sum; // returning the sum
    }