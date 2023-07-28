#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int x, y, n;
    cin >> x >> y >> n;

    if (n % x >= y) 
        cout << n - (n % x - y) << '\n';
    else 
        cout << (n - (n % x)) - (x - y) << '\n';

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
    Friday, July 28, 2023 | 10:34:58 (UTC +06:00) Dhaka
*/