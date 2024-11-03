#include <iostream>
#include <vector>
#include <sstream>


int main(){
    std::string sit;
    std::getline(std::cin,sit);
    bool danger=false;
    int streak=0;
    for(int i=0;i < sit.size()-1;i++){
        if(sit[i] == sit[i+1]) {
            streak++;
            if(streak ==6) {
                danger=true;
            }
        } else {
            streak=0;
        }
    }

    if(danger) std::cout << "YES";
    else std::cout << "NO";

    return 0;
}