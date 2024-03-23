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
        int n,m,k,H,x=0; cin >> n >> m >> k >> H;
        int a[n],d[n];
        for(int i =0; i < n; i++)
        {
            cin >> a[i];
            d[i] = abs(H-a[i]);
        }
        for(int i =0; i < n; i++)
        {
            if(d[i] % k == 0 && d[i]/k < m && d[i] != 0)
            x++;
        }
        cout << x << endl;

    }
}