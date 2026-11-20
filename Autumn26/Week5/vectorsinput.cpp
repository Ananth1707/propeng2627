#include <iostream>
#include <vector>
#include <cmath>

double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

void min_vector_element(const std::vector<double>& vin, int &minpos, double &minval){
    minval = INT_MAX;
    minpos = -1;
    // when we run this function many times, we may want to always start off at these values
    // hence the global variables defined in the main
    // and when we need to run this many times
    // each time it begins at the values INT_MAX and -1

    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < minval){
            minval = vin[i];
            minpos = i;
        }
    }
}

int main(){
    int minpos = 0;
    double minval = 0;
    std::vector<double> v{3, 0.5, -1};
    // we can initialise vectors like this (no = needed)

    double expected_sum = 2.5;
    // we may think of writing:
    // std::cout << (sum_vector(v) == 2.5) << std::endl;
    // but we shouldn't compare non-integers using ==
    // as the representation can be approximated

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;
    // the test will be passed if we see 0 or a very small number

    v = {2, -1.1, 7, -1.5};
    // we can also assign values like this

    expected_sum = 6.4;

    std::cout << (std::abs(sum_vector(v)) - expected_sum) << std::endl;

    min_vector_element(v, minpos, minval);

    std::cout << minpos << std::endl;
    std::cout << minval << std::endl;

}