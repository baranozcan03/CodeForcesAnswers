#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int tempn=n;
    cin>>n;
    vector<pair<int,int>>l;
    int price,quality;
    while(n) {
        cin >> price>>quality;
        n--;
        l.push_back({price,quality});
    }    
    
    bool h=false;
    sort(l.begin(),l.end());

    for (int i = 0 ; i <l.size()-1; i++ ){
        if(l[i].second > l[i+1].second) {
        cout << "Happy Alex";
        h = true;
        break;
        }
    }

    if(!h) cout << "Poor Alex";

}
