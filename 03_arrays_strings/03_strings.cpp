#include <iostream>
#include <string>

int main() {
    // Declare a string variable to store the name
    std::string name;

    // Prompt for entering the name
    std::cout << "Enter your name: ";
    std::cin >> name; // User inputs the name

    // Greeting message
    std::cout << "Hello, " << name << "!" << std::endl;

    // Calculate and output the number of characters in the name
    int length = name.size();
    std::cout << "The number of characters in your name is: " << length << std::endl;

    return 0;
}
