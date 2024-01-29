#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int cnt_divisor(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
    }

    return cnt;
}

int is_palindrome(int n) {

    string s = to_string(n);
    string rs = s;
    reverse(s.begin(), s.end());

    if (rs == s)
        return 1;

    return 0;
} 

int is_prime(int n) {
    if (n == 1)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

bool solve() {
    
    int n; cin >> n;

    int prime = 0, palindrome = 0, cnt = 0, mx_divisor = 0;
    vector<int> v;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        prime += is_prime(x);
        palindrome += is_palindrome(x);

        cnt = cnt_divisor(x);
        vp.push_back({x, cnt});
        mx_divisor = max(mx_divisor, cnt);

        v.push_back(x);
    }

    sort(v.begin(), v.end());
    sort(vp.rbegin(), vp.rend());

    int divisors = 0;
    for (auto u : vp) {
        if (u.second == mx_divisor) {
            divisors = u.first;
            break;
        }
    }

    int mx = v[n - 1], mn = v[0];

    cout << "The maximum number : " << mx << '\n';
    cout << "The minimum number : " << mn << '\n';
    cout << "The number of prime numbers : " << prime << '\n';
    cout << "The number of palindrome numbers : " << palindrome << '\n';
    cout << "The number that has the maximum number of divisors : " << divisors << '\n';

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
    Sunday, January 28, 2024 | 17:04:59 (UTC +06:00) Dhaka
*/