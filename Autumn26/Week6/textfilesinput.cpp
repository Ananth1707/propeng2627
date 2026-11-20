#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> vec;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        vec.push_back(tmp); 
    }

    infile.close(); 


    std::cout << "the text file has the following words:" << std::endl;

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << std::endl;
    }

    std::cout << "in reverse order:" << std::endl;


    for(int i = vec.size() - 1; i >= 0; i--){
        std::cout << vec[i] << std::endl;
    }

    }