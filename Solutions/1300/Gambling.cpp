#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,tn,tmp;
    cin>>n;
    tn=n;
    vector<int> A;
    vector<int> B;
    while(tn--) {
        cin>>tmp;
        A.push_back(tmp);
    }
    tn=n;
    while(tn--) {
        cin>>tmp;
        B.push_back(tmp);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    long long sA=0,sB=0;bool t=false;
    n+=n;
    while(n--) {
        if(!t) {
            if(A.size()> 0 && (B.size() <1 || *(A.end()-1) > *(B.end()-1))) {
                sA+= (long long)*(A.end()-1);
                A.pop_back();
            }
            else B.pop_back();
        }
        else {
            if(B.size()> 0 && (A.size() <1 || *(B.end()-1) > *(A.end()-1))) {
                sB+= (long long)*(B.end()-1);
                B.pop_back();
            }
            else A.pop_back();
        }
        t = !t;
    }

    cout << sA - sB;
    return 0;
}

