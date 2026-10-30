#include <iostream>

int main(){
    int num, answer = 1;

    std::cin >> num;
    for(int counter = 1; counter <= num; counter++){
        answer = answer * counter;
    }
    std::cout << answer;
}