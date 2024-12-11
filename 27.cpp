#include <iostream>

int main() {
    // Create an array of 10 integers
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Replace the 5th value (index 4) with 200
    arr[4] = 200;

    // Output the modified array
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}