#include <iostream>
#include <vector>
#include <sstream>


//undertand how clearing the flag in cin works please...

int main() {
    int vecNum;
    std::vector<int> forces{0,0,0};
    std::string vector;
    std::cin >> vecNum;
    std::cin.ignore();  // Clear newline from input buffer
    bool neg=false;

    while(vecNum) {
        vecNum--;
        int count = 0;
        int lastempt=0;
        std::getline(std::cin, vector);
        std::string delimiter = " ";
        forces[0] += stoi(vector.substr(0, vector.find(delimiter)));
        vector.erase(0, vector.find(delimiter) + delimiter.length());
        forces[1] += stoi(vector.substr(0, vector.find(delimiter)));
        vector.erase(0, vector.find(delimiter) + delimiter.length());
        forces[2] += stoi(vector.substr(0, vector.find(delimiter)));
    }
    
    if (forces[0] == 0 && forces[1] == 0 && forces[2] == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
