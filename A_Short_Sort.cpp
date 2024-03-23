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
            string s; cin >> s;
            if(s[2] == 'a' && s[0] == 'b' || s[0] == 'c' && s[2] == 'b')
            cout << "NO" << endl;
            else
            cout << "YES" << endl;
            
    }
}