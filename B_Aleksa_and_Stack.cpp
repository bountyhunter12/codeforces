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
       int n,x; cin >> n;
       x=n;
       int a[n];
       for(int i = 0; i < n; i++)
       {
        a[i] = i*2+1;
       }
       for(int i = 0; i < n; i++)
       {
        cout << a[i] << " ";
       }
       cout << endl;


    }
}