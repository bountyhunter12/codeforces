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
        int n,m,k; cin >> n >> m >> k;
        vector<int>v(n);
        int s=0;
        //int x=INT_MAX, y=INT_MIN;
        for(int i = 0; i < n ;i++)
        {
            cin >> v[i];
            s += v[i];
        }
        sort(v.begin(),v.end());
        int x=v[0],y=v[n-1];
        vector<int>v1(m);
         for(int i = 0; i < m ;i++)
        {
            cin >> v1[i];
        }
        sort(v1.begin(),v1.end());
        int x1=v1[0],y1=v1[m-1];
        if(x<=x1)
        {
            if(k%2)
            cout << s-x+y1 << endl;
            else
            cout << s+min(y,y1)-y << endl;
        }
        else if(x>=y1)
        {
            if(k%2)
            cout << s << endl;
            else
            cout << s-y+x1 << endl;
        }
        else
        {
            
            if(k%2)
            cout << s-x+y1 << endl;
            else
            cout << s+x1+min(y,y1)-y-x1 << endl;
        }

    }
}
