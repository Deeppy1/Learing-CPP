//Starting Libarys
#include<iostream>
#include<string>
int main(){ //Main function
    int num1, num2;// Declare variables
    std::cout << "Enter first number: ";// First input
    std::cin >> num1;//Get number
    std::cout << "Enter seccond number: ";// Seccond input
    std::cin >> num2;// Get number 2
    int sum = num1 + num2;// Define variable and add numbers
    std::cout << "Total is: " << sum << std::endl;// Print output
    return 0;// Return Succses
}