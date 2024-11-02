#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int nOfCoins,coin;
    std::cin >> nOfCoins;
    std::vector<int>coins;
    while(nOfCoins){
        nOfCoins--;
        std::cin >> coin;
        coins.push_back(coin);
    }
    std::sort(coins.begin(),coins.end());
    int mySize=0, myStep=0,mySum=0, alterSum=0,alterStep=coins.size()-1;
    while(myStep!=alterStep){
        if(mySum<=alterSum) {
            mySum += coins[myStep];
            myStep++;
            mySize++;
        }
        else{
            alterSum+=coins[alterStep];
            alterStep--;
        } 
    }
    if(mySum<=alterSum) {
        mySize++;
        std::cout << mySize;
    }
    else{
        std::cout << mySize;
    }
    return 0;
}