//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<set<int>>s(n);
        for(int i =0; i < n; i++)
        {
            int x; cin >> x;
            for(int j =0; j < x; j++)
            {
                int m; cin >> m;
                s[i].insert(m);
            }
        }
        int w=0;
        vector<int>v(100,0);
        for(int i =0; i < n; i++)
        {
            for(auto p:s[i])
            {
                if(v[p])
                continue;
                set<int>ss;
                for(int j =0; j < n; j++)
                {
                    if(s[j].find(p) != s[j].end())
                    continue;
                    for(auto q:s[j])
                    ss.insert(q);
                }
                 w = max(w,int(ss.size()));
            }
           
        }
        cout << w << endl;

            
    }
}