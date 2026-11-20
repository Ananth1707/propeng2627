#include <iostream>

double mypow(int a, int b){
    double result = 1;

    for(int i = 1; i <= b; i++){
        result = a*result;
    }

    return result;
}

int main(){
    double base;
    int power;
    std::cout << "Tell me the base: " << std::endl;
    std::cin >> base;
    std::cout << "Tell me the power: " << std::endl;
    std::cin >> power;
    double res = mypow(base, power);
    std::cout << "The value of " << base << "^" << power << " is " << res << std::endl;
}