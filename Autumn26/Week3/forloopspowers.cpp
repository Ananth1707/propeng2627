#include <iostream>

int main(){
    int x, power, answer = 1;

    std::cin >> x >> power;

    for(int i = 0; i < power; i++){
        answer = answer*x;
    }
    std::cout << x << "^" << power << " = " << answer << std::endl;
}