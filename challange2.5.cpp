#include<iostream>
#include<string>
#include<vector>
int main(){
    std::vector<std::string> names;
    std::string name;
    for(int i = 0; i < 3; i++){
        std::cout << "Enter name " << i +1 << " : "
        std::cin >> name;
        names.push_back(name);
    }
    std::cout << "\n You entered: \n" << std::endl;
    for(int i = 0; i < name.size(); i++){
        std::cout << names[i] << sdt::endl;
    }
    return 0
}