#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i =0 ; i < n ; i ++) {
            cin>>a[i];
        }
        long long original = 0;
        int iCount = 0;
        for(int i: a) {
            if(i == 0 ) original+=iCount;
            else   iCount++;
        }
        
        //by making the last 1 a 0.
        int LastLi=-1;
        for(int i = n-1 ; i >=0; i--) {
            if(a[i] == 1) {LastLi = i;
            break;
            }
        }
        long long variant1=0;
        if(LastLi>=0) {
            a[LastLi] = 0;
            iCount = 0;
            for(int i: a) {
                if(i == 0 ) variant1+=iCount;
                else   iCount++;
            }
            a[LastLi] = 1;
        }

        //by making the first 0 a 1 
        int FirstLi=-1;
        for (int i =0;i < n; i++) {
            if(a[i] ==0) {
                FirstLi=i;
                break;
            }
        }
        long long variant2 = 0;
        if(FirstLi>=0) {
            a[FirstLi] = 1;
            iCount = 0;
            for(int i: a) {
                if(i == 0 ) variant2+=iCount;
                else   iCount++;
            }
            a[FirstLi] = 0;
        }
        
        if(variant1 > original) original = variant1;
        if(variant2 > original) original = variant2; 
        
        cout << original << "\n";
    }
}

