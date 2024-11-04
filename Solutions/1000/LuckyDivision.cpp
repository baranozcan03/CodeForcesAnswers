#include <iostream>
#include <vector>
#include <string>

//read the problem statement sometimes you can write by hand brooooo.

int main() {

    int num,d=4,p=0;
    bool y=false ;
    std::cin >> num;
    std::vector<int> luckies = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for (int l:luckies) {
        if(num%l == 0 ) {
            std::cout << "YES";
            y=true;
            break;
        }
    }
    if(!y) std::cout << "NO";
    return 0;

}