#include <iostream>

int main(){
    double n, absv;
    // n for the input, absv will be
    // the absolute value we compute 

    std::cout << "please type in a number" << std::endl;
    std::cin >> n;

    if(n < 0){
        absv = -n;
    }
    else{
        absv = n;
    }
    std::cout << "|" << n << "| = " << absv << std::endl;
}