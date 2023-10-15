#include <iostream>

int main() {
    int a[3][4] = {  
        {0, 1, 2, 3} ,   //initializers for row indexed by 0
        {4, 5, 6, 7} ,   //initializers for row indexed by 1
        {8, 9, 10, 11}   //initializers for row indexed by 2
    };

    // Print 3
    std::cout << "Row 1, Col 4: " << a[0][3] << std::endl;
}
