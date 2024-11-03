//watermelon
#include <iostream>


int main() {
    int w; //take the wegiht
    std::cin >> w;

    //as long as we can divide in two we can partition the remaining things into two
    // aka if w=6 -> you can partition 3 into 1 and 3
    //the only even number when divided by 2 that cant be partitioned is 2 since 1 cant be shared.
    if(w%2 != 0 ||w==2){
        std::cout << "NO";
    }
    else {
        std::cout<<"YES";
    }
return 0;
}