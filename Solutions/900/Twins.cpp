#include <iostream>
#include <vector>
#include <algorithm>

//lesson, the built in sort sorts in the ascending order.

int main(){
    int nOfCoins,coin;
    std::cin >> nOfCoins;
    std::vector<int>coins;
    while(nOfCoins){
        nOfCoins--;
        std::cin >> coin;
        coins.push_back(coin); //first get all the coins into a vector
    }
    std::sort(coins.begin(),coins.end(),std::greater<>());//sort the vector, since if we act on a coin w should know that 
    //it is the biggest coin next to take to keep the amount of coins taken minimum.
    int sum=0,mySum=0,tefth=0;
    for(int coin : coins) {sum+=coin;}//keep the sum left for the twin
    for(int coin : coins) {//one by one take the coins
        if(mySum>sum) {break;}
        else {
            mySum+=coin;
            sum-=coin;
            tefth++;
        }
    }
    std::cout << tefth;
    return 0;
}