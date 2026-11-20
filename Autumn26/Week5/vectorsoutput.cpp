#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
// First, clear vout to make sure it's empty before appending
    vout.clear();
// Append all elements from vin1
    for (int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }

    // Append all elements from vin2
    for (int i = 0; i < vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }

}

int main(){
    std::vector<int> vin1;
    std::vector<int> vin2;
    std::vector<int> v;


    int temp, v1size, v2size;

    std::cout << "tell me size" << std::endl;
    std::cin >> v1size;
    std::cout << "please tell me vector 1" << std::endl;

    for(int i = 0; i < v1size; i++){
        std::cin >> temp;
        vin1.push_back(temp);
    }

    std::cout << "tell me size 2" << std::endl;
    std::cin >> v2size;
    std::cout << "please tell me vector 2" << std::endl;

    for(int i = 0; i < v2size; i++){
        std::cin >> temp;
        vin2.push_back(temp);
    }

    append_vectors(vin1, vin2, v);

    std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
}