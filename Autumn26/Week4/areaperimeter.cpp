#include <iostream>

void areaperim(double a, double b, double& area, double& perim){
    area = b*a;
    perim = a + b;
}

int main(){
    double length, width, a, p;
    a = 0;
    p = 0;
    std::cout << "this program tells you the area and perimeter for a given length and width" << std::endl;
    std::cout << "tell me a width, then a length" << std::endl;
    std::cin >> width >> length;

    areaperim(width, length, a, p);

    std::cout << "the area is " << a << " metres^2" << std::endl;
    std::cout << "the perimeter is " << p << " metres" << std::endl;

}