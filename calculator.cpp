//Libarys
#include<iostream>
#include<string>
int main() { //Main Function
    int num1, num2, output;// define variable
    char operation;// define variable
    std::cout << "Enter First Number: " << std::endl;//ask for first number
    std::cin >> num1;// set variable
    std::cout << "Enter Seccond Number: " << std::endl;//ask for seccond number
    std::cin >> num2;//set variable
    std::cout << "Enter Operation (+,-,/,*)";//ask question
    std::cin >> operation;//get input
    if (operation == '+'){// if opperation is +
        output = num1 + num2;// add
    }
    else if (operation == '-'){//if operation is -
        output = num1 - num2 ;//subtract
    }
    else if (operation == '/'){//if opperation is /
       
        
        if(num2 == 0){// if num2 is 0 and you are dividing 
            std::cout << "Cannot Divide by 0";//state that you cant divide by 0
            return 0;//exit
        }
        else{
            output = num1 / num2;// divide
        }
    }
    else if(operation == 'x'|| operation == '*'){// if operation is x 
        output = num1 * num2;// multiply 
    }
    else{ // if none of the if's are succsesful do this 
        std::cout << "invalid input. Please Enter(+,-,/,*)"; //Say invalid 
        return 0; //Exit
    }
    std::cout << "Result is: " << output << std::endl;// Final result
}