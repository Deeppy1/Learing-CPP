//Include Libary
#include<iostream>
#include<string>
int main() { //Main Function
    std::string name;// Define Variable
    std::cout << "Enter your name ";// Print the enter your name line
    std::getline(std::cin, name);// Get the input
    std::cout << "Hello " << name << "!" << std::endl;// Print the variable with other bits
    return 0;// Return Succses
}