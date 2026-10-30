#include <iostream>

int main(){
    int x, n, answer = 0, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        answer = answer + x;
        counter = counter + 1;
    }

    std::cout << x << " + " << x << " for " << n << " times " << " = " << answer << std::endl;
}