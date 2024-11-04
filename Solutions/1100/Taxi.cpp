#include <iostream>
#include <vector>
#include <string>

int main() {
    int groups=0,n1=0,n2=0,n3=0,n4=0,size=0, taxi=0;
    std::cin>> groups;
    while(groups--) {
        std::cin >> size;
        if(1 == size) {n1++;}
        else if(2 == size) {n2++;}
        else if(3 == size) {n3++;}
        else {n4++;}
    }

    taxi += n4;
    taxi += n3;
    n1 -= n3;
    taxi += n2/2;
    n2 = n2%2;
    if(n1>2) {
        if(n2){
            taxi++;
            n1-=2;
        }
        taxi += n1/4;
        if(n1%4) {taxi++;}
    } 
    else if(n1==2 || n1==1) {
        taxi++;
    } 
    else{
        if(n2) {taxi++;}
    }

    std::cout << taxi;
    return 0;
}