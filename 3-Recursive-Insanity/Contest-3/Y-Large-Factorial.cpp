#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    ll mod = 1e9 + 7;

    ll fact = 1;
    for (int i = 2; i <= n; i++)
        fact = (fact * i) % mod;
    
    cout << fact << '\n';

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, August 04, 2023 | 11:44:45 (UTC +06:00) Dhaka
*/