#include <iostream>
using namespace std;
int main(){
    //creating an array with numbers
    int numbers[]= {1,2,3,4,5};

    //Accessing elemts in the array
    cout << "First Element: " << numbers[0] <<endl; //Output: 1
    cout << "Last Element: " << numbers[4] <<endl;  //Output: 5

    //Modifying an element
    numbers[2] = 10;    //Chanding the third element to 10
    cout << "Modified array: ";

    //Looping through the array
    for(int i=0;i<5;i++){
    cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}   