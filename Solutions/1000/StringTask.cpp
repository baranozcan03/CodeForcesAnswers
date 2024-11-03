#include <iostream>
#include <vector>
#include <sstream>

int main() {

    std::string theLine;
    std::vector<char> line;
    std::getline(std::cin,theLine);

    for(char newChar : theLine){
        if( newChar != 'A' && newChar != 'O' && 
            newChar != 'Y' && newChar != 'E' && 
            newChar != 'U' && newChar != 'I' &&
            newChar != 'a' && newChar != 'o' && 
            newChar != 'y' && newChar != 'e' && 
            newChar != 'u' && newChar != 'i') {
                //std::cout << "yey";
                if(newChar <97) {
                    newChar = newChar - 'A' + 'a';
                }
                line.push_back('.');
                line.push_back(newChar);
            }
    }
    for(char i : line){
        std::cout << i;
    }

    return 0;
}