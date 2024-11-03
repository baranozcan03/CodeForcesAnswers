#include <iostream>
#include <vector>
#include <sstream>

int main() {
    int vecNum;
    std::vector<int> forces{0,0,0};
    std::string vector;
    std::cin >> vecNum;
    bool neg=false;

    while(vecNum+1) {
        vecNum--;
        int count = 0;
        int lastempt=0;
        std::getline(std::cin, vector);
        for(int i = 0 ; i < vector.size(); i++) {
            if (vector[i] = ' ') {
                std::string wtf = vector.substr(lastempt,i-lastempt);
                std::cout << wtf << std::endl;
                forces[count] = std::stoi("5");
                int lastempt = i;  
                count++;
            }
        }
        std::cout << forces[0] << " " << forces[1] << " " << forces[2] << "\n";
    }
    bool equ = true;
    for(int i : forces) {
        std::cout << i;
        if(i != 0 && equ) {
            std::cout << "NO";
            equ = false;
        }
    }
    if(equ) std::cout <<"YES";


    return 0;
}
