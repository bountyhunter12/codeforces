//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int d[n],s[n];
        int u = INT_MAX;
        int i =0;
        while(n--)
        {
             cin >> d[i] >> s[i];
             int p= (s[i]-1)/2;
            u = min(u,p+d[i]);
            i++;
        }
        cout << u << endl;
    }
}