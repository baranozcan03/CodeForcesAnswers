#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,c;
    long long t;
    cin >> n>>t>>c;
    vector<long long>p(n);
    for(int i = 0; i < n; i++) cin>>p[i];
    int count = 0;
    vector<int>L;
    for(int s=0 ; s < n; s++) {
        if(p[s] <= t) count++;
        else {
            L.push_back(count);
            count =0;
        }
    }L.push_back(count);
    int aws = 0;
    for(int l : L) {
        if(l-c+1 > 0) aws+=l-c+1;
    }
    cout << aws;

    return 0;
}    

