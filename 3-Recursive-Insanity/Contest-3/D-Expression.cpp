#include <bits/stdc++.h>
using namespace std;

#define ed "\n"
#define string str

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, ara[6], max = 0;

    cin >> a >> b >> c;
    
    ara[0] = a + b + c;
    ara[1] = a + (b * c);
    ara[2] = a * b * c;
    ara[3] = (a + b) * c;
    ara[4] = (a * b) + c;
    ara[5] = a * (b + c);

    max = ara[4];

    for (int i = 0; i <= 5; i++) {
        if (ara[i] > max) {
            max = ara[i];
        }
    }

    cout << max << ed;
    return 0;
}