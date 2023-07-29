#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll a, b; cin >> a >> b;

    cout << (a * b) / __gcd(a, b) << '\n';
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, July 29, 2023 | 11:21:02 (UTC +06:00) Dhaka
*/