#include <iostream>

int smallest_factor(int n){ 

    for(int cf = 2; cf < n; cf++){
        if((n % cf) == 0){
            return cf;
        }
    }
    return 0;
}


int main(){
    int number;
    std::cin >> number;
    int factor = smallest_factor(number);
    std::cout << "smallest prime factor is: " << factor << std::endl;
}