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
            int n,f=0; cin >> n;
            int s[n],e[n];
            for(int i = 0; i < n; i++)
            cin >> s[i] >> e[i];
            int x=s[0],y=e[0];
            for(int i = 1; i < n; i++)
            {
                if(s[i] >= x &&  e[i] >= y)
                {
                    f=1;
                }
            }
            if(f)
            cout << -1 << endl;
            else
            cout << x << endl;
            
    }
}