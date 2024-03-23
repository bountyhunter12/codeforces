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
        int n,m;cin >> n >> m;
        vector<int>v1;
        vector<pair<int,int>>v(n);
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            v[i].first=x;
            v1.push_back(x);
        }
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            v[i].second=x;
        }
        sort(v.begin(),v.end());

        sort(v1.begin(),v1.end());
        int p = v[n-1].second;
        for(int i = n-1; i >= 0; i--)
        {
 
            v[i].second = min(p,v[i].second);
            p = v[i].second;
        }
 
        int s = m;
 
        while(m >= 0)
        {
            auto it=upper_bound(v1.begin(),v1.end(),s);

            auto id=it-v1.begin();
            m -= v[id].second;
            if(m < 0) break;
            s += m;

            if(s >= v[n-1].first) 
            break;
        }
 
        if(s >= v[n-1].first) 
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    

}