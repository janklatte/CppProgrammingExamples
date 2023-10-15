#include <iostream>

int main() {
    int myArray[6] = {10, 50, 2, 99, 1, 7}; // Initialize integer array with values
    std::cout << "Array: " << myArray[0] << " " << myArray[1]<< " " << std::endl; // Print first elements of array

    myArray[3] = 5; // Change element of array
    std::cout << "Element 3: " << myArray[3] << std::endl; // Print element value

    double myDoubleArray[4]; // Default initialization
    // assigning values afterwards
    myDoubleArray[0] = 1.0;
    myDoubleArray[1] = 5.5;
    myDoubleArray[2] = 8.75;
    myDoubleArray[3] = 2.34;

    std::cout << "Double Array: " << myDoubleArray[0] << " " << myDoubleArray[1]<< " " << std::endl; // Print first elements of array
}
