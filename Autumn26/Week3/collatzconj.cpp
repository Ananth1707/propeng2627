#include <iostream>

int main(){
    int n, counter = 0, max, startn;

    std::cout << "Tell me a number, any number: " << std::endl;
    std::cin >> n;

    startn = n;
    max = n;

    while(n != 1){
        if(n % 2 != 0){
            n = 3*n + 1;
            std::cout << n << "\t";
            if(n > max){
                max = n;
            }
        }
        else{
            n = n / 2;
            std::cout << n << "\t";
        }
        counter++;
    }
    std::cout << std::endl;
    std::cout << "The number of steps was: " << counter << std::endl;
    std::cout << "The max term was: " << max << std::endl;
    }