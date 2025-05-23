//lib
#include<iostream>
#include<string>
#include<vector>

struct Student {
    std::string name;
    int age;
    char grade;
};

int main() {//main
    int numberOfStudents;
    std::vector<Student> students;
    std::cout << "Number Of Students: ";
    std::cin >> numberOfStudents;
    std::cin.ignore();
    for(int i = 0; i < numberOfStudents; i++){
        Student temp;
        std::cout << "\nEnter name of student " << i +1 << ": ";
        std::getline(std::cin, temp.name);
        std::cout << "Enter Age: ";
        std::cin >> temp.age;
        std::cout << "Enter Grade (A,B,C,D,E,F): ";
        std::cin >> temp.grade;
        std::cin.ignore();
        students.push_back(temp);
    }
    std::cout << "\n List Of Students" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for(int i = 0; i < students.size(); i++) {
        std::cout << students[i].name << "|" << students[i].age << "|" << students[i].grade << std::endl;
    }
return 0;
}
