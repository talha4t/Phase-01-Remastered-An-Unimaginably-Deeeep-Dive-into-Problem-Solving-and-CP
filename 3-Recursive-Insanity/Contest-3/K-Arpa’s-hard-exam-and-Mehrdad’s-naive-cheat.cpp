#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 0)
        cout << 1 << '\n';
    else if (n % 4 == 1)
        cout << 8;
    else if (n % 4 == 2)
        cout << 4;
    else if (n % 4 == 3)
        cout << 2;
    else
        cout << 6;
    
    cout << '\n';

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
    Saturday, July 29, 2023 | 16:58:51 (UTC +06:00) Dhaka
*/