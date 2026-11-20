#include <iostream>
#include <fstream>
#include <cstdlib>

// argc is the number of command line arguments
// argv is an array of C-style strings
// we'll see what this means more in detail later on

int main(int argc, char* argv[]){

    // i expect the first thing to be ...

    for(int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }

    if (argc != 2) {
        std::cout << "...";
        return 0;
    }

    std::ifstream infile;

    infile.open(argv[1]);


    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();

}

