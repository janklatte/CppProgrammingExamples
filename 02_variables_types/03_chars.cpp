#include <iostream>

int main() {
    char myChar = 'A'; // Create variable with value "A"
    std::cout << "Char 1: " << myChar << std::endl; // Print variable
    char myChar2; // Create variable without initialization (default)
    myChar2 = 'A'; // Assign "A" to variable
    std::cout << "Char 2: " << myChar2 << std::endl; // Print variable
    char myChar3 = 'A'; // Create variable with value "A"
    myChar3 = 'X'; // Change variable to "X"
    std::cout << "Char 3: " << myChar3 << std::endl; // Print variable
    return 0;
}
