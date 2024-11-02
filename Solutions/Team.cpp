#include <iostream>
#include <vector> 

int main() {
    int problemsize;
    std::cin >> problemsize; //how many calls we will take
    int verdict1,verdict2,verdict3; //take the call of each of the team members
    int implement=0;
    while(problemsize) {//while there is still probelms
        problemsize--;
        std::cin >> verdict1>>verdict2>>verdict3; //take in the calls of the team
        if((verdict1+verdict2+verdict3)>=2) implement++;//calculate submitted or not
    }
    std::cout << implement;

}