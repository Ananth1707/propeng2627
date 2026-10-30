#include <iostream>

int main(){
    double weight, height, heightsquared, BMI;

    std::cout << "what is your weight in kg? " << std::endl;
    std::cin >> weight;

    std::cout << "what is your height in metres? " << std::endl;
    std::cin >> height;

    heightsquared = height*height;

    BMI = weight / heightsquared;

    std::cout << "Your BMI is " << BMI << ", stay healthy!" << std::endl;
}