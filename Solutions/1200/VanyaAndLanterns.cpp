#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double diff=0;
    int n, l;
    cin >> n >> l;
    vector<int> lamps;
    while(n--) {
        int lamp;
        cin>>lamp;
        lamps.push_back(lamp);
    } 
    sort(lamps.begin(), lamps.end());
    diff = max((double)(lamps[0]), (double)(l -*(lamps.end()-1)));
    for(int i =0 ; i < lamps.size( )-1; i++) {
        double newdif = (double)((double)(lamps[i+1]-lamps[i])/2);
        diff = max(newdif,diff);
    }
    cout << fixed << setprecision(9) << diff << '\n';

}
