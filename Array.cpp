#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // print out all the arrays; 
    for(int i = 0; i <= 5; i++){
        // let's find out the max numbers; 
        // pluse the one at the index; 
        int one_sum = arr[i] + 1; 
        int max; 

        if(arr[i] > one_sum){
            max = arr[i];
        } else {
            max = arr[i];
            cout << "the else one is running" << max << endl;
        };

        cout << "one sum " << one_sum << endl;
        cout << "All index: " << arr[i] << endl;
    }
    
    return 0;
}