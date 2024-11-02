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
        columns.push_back(newcol);
    }
    sort(columns.begin(),columns.end());
    for(auto c : columns) {
        std::cout << c << " ";
    }



    return 0;
}