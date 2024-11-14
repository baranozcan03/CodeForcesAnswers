#include <bits/stdc++.h>
using namespace std;

const int MODULO = 1e9 + 7;

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long initialSum = 0;
        for (long long num : a) {
            initialSum = (initialSum + num + MODULO) % MODULO;
        }
        initialSum = (initialSum + MODULO) % MODULO; 

        long long maxSubarraySum = 0, currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum = max(a[i], currentSum + a[i]);
            maxSubarraySum = max(maxSubarraySum, currentSum);
        }

        maxSubarraySum = (maxSubarraySum + MODULO) % MODULO;

        long long result;
        if (k == 1) {
            result = (initialSum + maxSubarraySum + MODULO) % MODULO;
        } else {
            long long multiplier = ((modExp(2, k, MODULO)) + MODULO) % MODULO;
            result = (initialSum + (maxSubarraySum * multiplier % MODULO) - maxSubarraySum) % MODULO;
            
        }
        result += MODULO;
        result = result % MODULO;
        cout << result << "\n";
    }
}
