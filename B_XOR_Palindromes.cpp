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
        int n,c=0; cin >> n;
        string s; cin >> s;
        int a[n+1]={0};
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n-i-1]) c++;
        }
        a[c] = 1;
        for(int i = c; i <= n-c; i+=2)
        {
            a[i] = 1;
            if(n%2) a[i+1] = 1; 
        }
        for(int i = 0; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}