#include <iostream>

int main(){
    int number, remainder;

    std::cout << "please enter a number" << std::endl;
    std::cin >> number;

    remainder = number % 3;

    if(remainder == 0){
        std::cout << "the number is a multiple of 3" << std::endl;
    }
    else{
        std::cout << "the number is not a multiple of 3" << std::endl;
    }
}