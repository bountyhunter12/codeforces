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
       vector<int>v;
       for(int i =0 ; i < n; i++)
       {
        cin >> a[i];
       }
       v.push_back(a[0]);
       for(int i =1 ; i < n; i++)
       {
        if(a[i]< a[i-1])
        {
            v.push_back(1);
        }
        v.push_back(a[i]);
       }
       cout << v.size() << endl;
       for(int i =0 ; i < v.size(); i++)
       {
        cout << v[i] << " ";
       }
       cout << endl;
    }
    

}