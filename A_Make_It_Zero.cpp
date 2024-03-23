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
        int a[n];
        for(int i=0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n%2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << n << endl;
            cout << 2 << " " << n << endl;
            
        }
    }
}