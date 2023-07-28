#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    ll before_n = (n - 1) / 2;

    if (n & 1)
        cout << before_n - n << '\n';
    else {
        before_n++;
        cout << (-1 * before_n) + n << '\n';
    }

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
    Thursday, July 27, 2023 | 19:29:06 (UTC +06:00) Dhaka
*/