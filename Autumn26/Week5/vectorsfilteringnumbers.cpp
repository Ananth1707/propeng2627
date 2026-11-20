#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int n, seq, occur, counter = 0;

    std::cout << "please enter n: " << std::endl;
    std::cin >> n;

    std::cout << "please enter a sequence of " << n << " digits: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> seq;
        sequence.push_back(seq);
    }

    std::cout << "please enter a number: " << std::endl;
    std::cin >> occur;

    for(int i = 0; i < n; i++){
        if(sequence[i] == occur){
            counter ++;
        }
    }

    std::cout << "occurences are: " << counter << std::endl;






}