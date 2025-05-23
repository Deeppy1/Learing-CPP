//lib
#include<iostream>
#include<string>
#include<vector>
int main(){//main
    int number;//define variable
    std::vector<std::string> names;//define vector 
    std::string name;//define variable string
    std::cout << "How many names? "; //ask how many
    std::cin >> number;//get the input
    for(int i = 0; i < number; i++){//for loop for i in how ever many
        std::cout << "Enter name " << i +1 << " : ";//ask for the name
        std::cin >> name;//get input
        names.push_back(name);//add it to the vector
    }
    std::cout << "\n You entered: \n" << std::endl;//state name title
    for(int i = 0; i < number; i++){//for loop
        std::cout << names[i] << std::endl;//display names
    }
return 0;//exit and state succses
}
