#include <iostream>
#include <vector>

//lesson, use long long when the numbers are bigger than what 4 bytes can handle.

int main(){
    long long n,k;
    std::cin >> n >> k;
    long long oddCount = (n/2) + n%2; //first find the anount of odd integers
    long long evenCount = (n/2); //then the amount of even integers
    if(k > oddCount) { //check if we finished writing all odd intigers
        std::cout << (k-oddCount)*2; //then use the k-oddCountth even num
    }
    else {//we didnt finish odds
        std::cout << k*2-1;  //use the kth odd num.
    }
    return 0;
}