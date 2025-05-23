#include<iostream>
#include<string>
int main(){
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter seccond number: ";
    std::cin >> num2;
    int sum = num1 + num2;
    std::cout << "Total is: " << sum << std::endl;
    return 0;
}