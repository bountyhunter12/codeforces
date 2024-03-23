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
        string s,s1; cin >> s >> s1;
        int f=0;
        for(int i =0; i < s.size(); i++)
        {
            if(s[i] == '0' && s[i+1] == '1' && s1[i] == '0' && s1[i+1] == '1'){
            f=1;
            }
        }
        if(f)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}