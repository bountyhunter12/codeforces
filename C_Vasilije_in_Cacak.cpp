//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long  int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int aa(string s, string t)
{
    int c=0;
    for(int i =0; i < s.size(); i++)
    {
        if(s[i] != t[i]) c++;
        if(c > 1) return 0;
    }
    return 1;
}
int bb(string s,string t)
{
    int i=0;
    while(i < s.size() && s[i] == t[i]) i++;
    if(i == s.size()) return 1;
    return s.substr(i) == t.substr(i+1);

}
int32_t main()
{
    int t=1; //cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string t; cin >> t;
        vector<int>v;
        for (int i = 1; i <= n; i ++) {
        string s;
        cin >> s;
        int f=0;
        if ( s.size() == t.size()) {
            if (aa(s, t)) f=1;
        }
        else if (s.size() == t.size() - 1) {
            if (bb(s, t)) f=1;
        }
        else if (s.size() == t.size() + 1) {
            if (bb(t, s)) f=1;
        }
        if(f) v.push_back(i);
    }
       cout << v.size() << endl;
       for(int i =0; i  < v.size();i++)
       cout << v[i] << " ";     
        
    }
}