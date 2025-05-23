#include<iostream>
#include<string>
#include<vector>
int main(){
    int number;
    std::vector<std::string> names;
    std::string name;
    std::cout << "How many names? "; 
    std::cin >> number;
    for(int i = 0; i < number; i++){
        std::cout << "Enter name " << i +1 << " : ";
        std::cin >> name;
        names.push_back(name);
    }
    std::cout << "\n You entered: \n" << std::endl;
    for(int i = 0; i < number; i++){
        std::cout << names[i] << std::endl;
    }
return 0;
}
