//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long  int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int c=1,sum=0,p=0;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i-1])
            {
                sum=0;
                c=1;
                continue;
            }
            c++;
            if(c%2 == 0 && c >2) sum++;
            p += sum;
        }
        c=2,sum=0;
        for(int i = 2; i < n; i++)
        {
            if(s[i] != s[i-2])
            {
                sum=0;
                c=2;
                continue;
            }
            c++;
            if(c%2) sum++;
            p += sum;
        }
        cout << p << endl; 
         
    }
}