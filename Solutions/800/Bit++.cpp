#include <iostream>
#include <vector>

int main() {
    int lines;
    char part2,dummy;
    int x = 0;
    std::cin >> lines;
    while(lines) {
        lines--;
        std::cin >>dummy>>part2>>dummy;
        if(part2 == '-') {x--;}
        else {x++;}
    }
    std::cout << x;
}