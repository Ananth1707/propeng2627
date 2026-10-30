#include <iostream>
#include <string>

int main(){
    std::string word;
    bool end_word = false;

    std::cout << "Please enter a word: " << std::endl;
    std::cin >> word;

    while(end_word == false){
        std::cout << word << std::endl;
        std::cin >> word;
        if(word == "STOP"){
            end_word = true;
        }
    }
}

