#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close(); 

    std::ofstream outfile;
    outfile.open("output.txt");

    if (!outfile.is_open()) {
        std::cout << "Error opening output file" << std::endl;
        return EXIT_FAILURE;
    } 
    
    
    for(int i = v.size() - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }
    outfile.close();
    std::cout << "Data written to output.txt in reversed order." << std::endl;

}