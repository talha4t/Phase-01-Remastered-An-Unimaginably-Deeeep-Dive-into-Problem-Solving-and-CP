#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
int cnt;
void move(int s, int e) {

    if (s > e)
        return;
    if (s == e) {
        cnt++;
        return;
    }
    move(s + 1, e);
    move(s + 2, e);
    move(s + 3, e);

}
bool solve() {
    
    int s, e; cin >> s >> e;

    move(s, e);
    cout << cnt << '\n';
    
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
    Monday, January 29, 2024 | 07:05:37 (UTC +06:00) Dhaka
*/