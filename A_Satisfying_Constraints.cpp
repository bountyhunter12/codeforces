//heuristically programmed
//HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9 + 7;

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int s = 0;
        int ss = 0;
        int max_sum = 0;

        for (int i = 0; i < n; ++i) {
            s += v[i];
            ss += v[i];

            if (s < 0) {
                s = 0;
            } else {
                max_sum = max(s, max_sum);
            }
        }

        ss -= max_sum;
            for (int i = 0; i < k; ++i) {
                max_sum = (max_sum * 2) % MOD;
            }
            //ss += ((max_sum - 1) * max_sum);
        
    

        int ans = ((ss + max_sum)%MOD + MOD) % MOD;
        cout << ans << endl;
    }

    return 0;
}
