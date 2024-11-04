#include <iostream>
#include <vector>
#include <sstream>

int main() {

    std::string line;
    
    std::getline(std::cin,line);
    std::vector<char> letters= {'h','e','l','l','o'};
    int check=0;
    for(char c:line) {
        if(c == letters[check]) check++;
    }
    if(check == 5) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    
    return 0;
}