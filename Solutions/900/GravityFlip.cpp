#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int col, newcol;
    std::cin >> col;
    int colT = col;
    std::vector<int> columns;
    while(colT){
        std::cin>> newcol;
        colT--;
        columns.push_back(newcol); //put all columns that are given into a vector
    }
    sort(columns.begin(),columns.end()); //sotring in ascending order is equvelent to switcihng gravity.
    for(auto c : columns) {
        std::cout << c << " ";//print things out
    }



    return 0;
}