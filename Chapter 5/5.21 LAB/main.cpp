// 5.21 Adjust list by normalizing 

#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    
    int inputCount;
    double input;
    double max;
    std::vector<double> weightList;

    std::cin >> inputCount;

    for (int i = 0; i < inputCount; i++) {
        std::cin >> input;
        weightList.push_back(input);
        if (max < input || i == 0) {
            max = input;
        }
    }
    
    for (int i = 0; i < weightList.size(); i++) {
        weightList[i] = weightList[i] / max;
        std::cout << std::fixed << std::setprecision(2) << weightList[i] << " ";
    }

    std::cout << std::endl;    

    return 0;
}