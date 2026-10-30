#include <iostream>

int main(){
    int num, den, answer = 0, rem;

    std::cout << "Please enter 2 numbers" << std::endl;
    std::cin >> num >> den;

    while(num >= den){
        answer = answer + 1;
        num = num - den;
    }
    rem = num;
    std::cout << "The answer is " << answer << " remainder " << rem << std::endl;

}