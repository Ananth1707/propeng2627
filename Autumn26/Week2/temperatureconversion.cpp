#include <iostream>
#include <string>

int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the length is a number, the unit name is text

// stage 1 : input

    std::cin >> temp_in >> unit_in;
    // we don't print a prompt, we just read the input

    bool valid_unit = true;
    // we assume the user will input a valid unit

// stage 2 : data processing

    if((unit_in == "C") || (unit_in == "c")){
        unit_out = "F";
        temp_out = (temp_in * 1.8) + 32;
    }
    else if((unit_in == "F") || (unit_in == "f")){
        unit_out = "C";
        temp_out = (temp_in - 32) / 1.8;
    }
    else{
        valid_unit = false;
        // if the user inputs an invalid unit name
        // we update this variable
    }

// stage 3 : output
    if(valid_unit){
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl; 
    }
}