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
        int a=0,x=0;
        string s; cin >> s;
        if(s.size()/6 ==0 || (s.size()/6 == 1 && s.size()%6 == 0))
        cout << s.size()/6 << "." << s.size()%6 << " Over ";
        else
        cout << s.size()/6 << "." << s.size()%6 << " Overs ";
        for(int i =0; i < s.size(); i++)
        {
            if(isdigit(s[i]))
            a += (s[i]-'0');
        }
        if(a <2)
        cout << a << " Run ";
        else
        cout << a << " Runs ";
        for(int i =0; i < s.size(); i++)
        {
            if(s[i] == 'W')
            x++;
        }
        if(x <2)
        cout << x << " Wicket." << endl;
        else
        cout << x << " Wickets." << endl;
    }
}