#include <bits/stdc++.h>
using namespace std;

class DisjSet { 
    int *rank, *parent, n; 
  
public: 
    DisjSet(int n){ 
        rank = new int[n]();
        parent = new int[n]; 
        this->n = n; 
        makeSet(); 
    }   
    
    ~DisjSet() {
        delete[] rank;
        delete[] parent;
    }


    void makeSet(){ 
        for (int i = 0; i < n; i++) { 
            parent[i] = i; 
        } 
    } 

    int find(int x){ 
        if (parent[x] != x) { 
            parent[x] = find(parent[x]); 
        } 
        return parent[x]; 
    } 

    void Union(int x, int y){ 
        int xset = find(x); 
        int yset = find(y);  
        if (xset == yset) 
            return; 
        if (rank[xset] < rank[yset]) { 
            parent[xset] = yset; 
        } 
        else if (rank[xset] > rank[yset]) { 
            parent[yset] = xset; 
        } 
        else { 
            parent[yset] = xset; 
            rank[xset] = rank[xset] + 1; 
        } 
    } 
}; 
  

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p;
    cin >> n >> p;

    map<int, long long> prices;
    for (int i = 1; i <= n; i++) {
        long long price;
        cin >> price;
        prices[i] = price;
    }

    DisjSet friendgroups(n + 1); 
    for (int i = 0; i < p; i++) {
        int f1, f2;
        cin >> f1 >> f2;
        friendgroups.Union(f1, f2);
    }

    map<int, long long> pricelist;
    for (int i = 1; i <= n; i++) {
        int group = friendgroups.find(i);
        if (pricelist.find(group) == pricelist.end()) {
            pricelist[group] = prices[i];
        } else {
            pricelist[group] = min(prices[i], pricelist[group]);
        }
    }

    long long sum = 0;
    for (auto i : pricelist) {
        sum += i.second;
    }

    cout << sum << '\n';
    return 0;
}