#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    
    int res = v[0];

    for (int i = 1; i < n; i++)
        res &= v[i];

    if (res < k)
        cout << "YES";
    else
        cout << "NO";

    cout << '\n';

    return true;
}

int32_t main() {
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
    Friday, February 02, 2024 | 07:30:52 (UTC +06:00) Dhaka
*/