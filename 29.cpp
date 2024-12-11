#include <iostream>

int main() {
    
    int matrix[2][2];

    
    std::cout << "Enter 4 elements for a 2x2 matrix:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "Element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    
    std::cout << "The 2x2 matrix is:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl; 
    }

    return 0;
}