#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    while(1) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if ((a == 0) && (b == 0) && (c == 0))
            break;
        
        int diff_1 = b - a, diff_2 = c - b;
        if (diff_1 == diff_2)
            cout << "AP " << c + diff_1;
        else
            cout << "GP " << c * (b / a);

        cout << '\n';
    }

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, January 29, 2024 | 08:16:50 (UTC +06:00) Dhaka
*/