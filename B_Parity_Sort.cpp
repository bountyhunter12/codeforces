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
       int a[n],b[n];
       for(int i=0; i < n; i++)
       {
        cin >> a[i];
        b[i] = a[i];
       }
       sort(b,b+n);
       for(int i=0; i < n; i++)
       {
        if(a[i]%2 != b[i]%2){
        f=1;
        }

       }
       if(f==0)
       cout << "YES" << endl;
       else
       cout << "NO" << endl;
       

    }
}