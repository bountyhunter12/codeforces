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
        vector<pair<int,int>>v(n);
        int a[n];
        for(int i =0 ; i < n; i++)
        {
            int x; cin >> x;
            v[i] = {x,i};
        }
        sort(v.begin(),v.end());
        for(int j = n,i=0; i< n; i++,j--)
        {
            //cout << v[i].second << " ";
            a[v[i].second] =j;
        }
        for(int i =0 ; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}