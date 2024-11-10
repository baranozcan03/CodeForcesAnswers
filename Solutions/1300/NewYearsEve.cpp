#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,dn,k,r;
    cin >>n>>k;
    dn=n;
    int bitnum=0;
    long long mask = 0LL;
    while((dn || mask)) {
        dn = dn>>1;
        bitnum++;
    }

    if(k==1) r = n;
    else r = (long long) (pow(2,bitnum))-1;
    cout << r;
}
