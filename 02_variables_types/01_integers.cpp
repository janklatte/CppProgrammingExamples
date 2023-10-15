#include <iostream>

int main() {
    int myInteger = 15; // Create variable with value 15
    std::cout << "Integer 1: " << myInteger << std::endl; // Print variable
    int myInteger2; // Create variable without initialization (default)
    myInteger2 = 10; // Assign 10 to variable
    std::cout << "Integer 2: " << myInteger2 << std::endl; // Print variable
    int myInteger3 = 15; // Create variable with value 15
    myInteger3 = 10; // Change variable to 10
    std::cout << "Integer 3: " << myInteger3 << std::endl; // Print variable
    return 0;
}
