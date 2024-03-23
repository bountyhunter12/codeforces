//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int  int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k,f=0; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == k) f=1;
        }
        if(f) cout << "YES" << endl;
        else
        cout << "NO" << endl;

    }
}
