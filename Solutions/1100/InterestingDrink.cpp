#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

template <typename T>
int findLargestIndexOrPredecessorIndex(const std::vector<T>& v, T h) {
    int left = 0, right = v.size() - 1;
    int predecessorIndex = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;    
        if (v[mid] == h) {
            predecessorIndex = mid;
            left = mid + 1;
        } else if (v[mid] < h) {
            predecessorIndex = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return predecessorIndex;  
}

int main() {
    int noShpos;
    std::cin >> noShpos;
    std::cin.ignore();
    std::vector<long long>shopPrices;
    
    std::string line;
    std::getline(std::cin, line); 
    std::stringstream ss(line); 
    long long number;
    while (ss >> number) {
        shopPrices.push_back(number);
    }

    int numberOfDays;
    std::cin>> numberOfDays;

    std::vector<long long> budget;
    long long todaysb;
    for(int i =0 ; i <numberOfDays; i++) {
        std::cin>>todaysb;
        budget.push_back(todaysb);
    }

    std::sort(shopPrices.begin(), shopPrices.end());
    for (const auto& b : budget) {
        int index = findLargestIndexOrPredecessorIndex(shopPrices, b);
        if (index == -1) {
            std::cout << "0\n";
        } else {
            std::cout << index + 1 << "\n";
        }
    }


}