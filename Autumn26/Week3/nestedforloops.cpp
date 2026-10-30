#include <iostream>

int main(){
    int n;
    std::cout << "Enter your number for the times table:" << std::endl;
    std::cin >> n;

    for(int c = 1; c <= n; c++){
        for(int c2 = 1; c2 <= n; c2++){
            std::cout << c2*c << "\t";
        }
        std::cout << std::endl;  
    }
}