//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ss() {
     int a, b, m;
        cin >> a >> b >> m;
        cout << m/a << " " << m/b << endl;
        int ans = m / a + m / b + 2;
        cout << ans << endl;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        ss();
    }

    return 0;
}
