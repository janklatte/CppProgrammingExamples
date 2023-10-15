#include <iostream>

int main() {
    bool isNumber = true; // Create bool with value true
    bool isString = false; // Create bool with value false
    std::cout << "Is Number: " << isNumber << " Is String: " << isString << std::endl; // Print variable   


    bool isNumber2; // Create variable without initialization (default)
    isNumber2 = true; // Assign true to variable
    std::cout << "Is Number 2: " << isNumber2 << std::endl; // Print variable

    bool isNumber3 = true; // Create variable with value true
    isNumber3 = false; // Change variable to false
    std::cout << "Is Number 3: " << isNumber3 << std::endl; // Print variable

    return 0;
}
