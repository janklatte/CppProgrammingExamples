#include <iostream>

int main() {
    double myDouble = 1.5; // Create variable with value 1.5
    std::cout << "Double 1: " << myDouble << std::endl; // Print variable
    double myDouble2; // Create variable without initialization (default)
    myDouble2 = 1.5; // Assign 1.5 to variable
    std::cout << "Double 2: " << myDouble2 << std::endl; // Print variable
    double myDouble3 = 1.5; // Create variable with value 1.5
    myDouble3 = 2.34; // Change variable to 2.34
    std::cout << "Double 3: " << myDouble3 << std::endl; // Print variable
    return 0;
}
