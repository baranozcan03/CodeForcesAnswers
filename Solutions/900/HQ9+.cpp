#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin,line);
    bool legit = false;
    for(char i : line) {
        if(i == 'H' || i=='Q' || i == '9') {
            std::cout << "YES";
            legit = true;
            break;
        }
    }
    if(!legit) std::cout << "NO";


    return 0;
}