#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll a, b, c;
    cin >> a >> b >> c;

    ll d = (b * b) - 4 * a * c;

    if (d > 0) {
        ll r1 = (- b + sqrt(d)) / (2 * a);
        ll r2 = (- b - sqrt(d)) / (2 * a);

        cout << "Two roots: "<< min(r1, r2) << ' ' << max(r1, r2) << '\n';
    }
    else if (d == 0) {
        ll r1 = - b / (2 * a);

        cout << "One root: " << r1 << '\n';
    }
    else
        cout << "No roots\n";

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
    Friday, August 04, 2023 | 19:21:10 (UTC +06:00) Dhaka
*/