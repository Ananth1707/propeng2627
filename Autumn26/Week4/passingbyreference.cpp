#include <iostream>

void sort_two_numbers(double& s1, double& s2){
    double tempnum;
    if(s2 > s1){
        tempnum = s2;
        s2 = s1;
        s1 = tempnum;
    }
}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}