#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b,c;
    cin >> n>>a>>b>>c;
    // ax+by+zy = n
    int maX = 1;
    for(int x = 0 ; x < 4001; x++) {
        for(int y = 0 ; y < 4001 ; y++) {
            int remaining = n - (a * x + b * y);
            if (remaining >= 0 && remaining % c == 0) {
                int z = remaining / c;
                maX = max(maX, (x+y+z));
            }
        }
    }
    cout << maX;
}

