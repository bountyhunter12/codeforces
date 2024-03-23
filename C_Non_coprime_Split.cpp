//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int prime(int x)
{
    if(x < 2) return 0;
    if(x==2) return 1;
    for(int i =2; i*i <= x; i++)
    {
        if(x%i == 0)
        return 0;
    }
    return 1;

}
int d(int x)
{
    for(int i =2; i*i <= x; i++)
    {
        if(x%i == 0)
        return i;
    }
    return x;
}
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int l,r,f=1; cin >> l >> r;
        if(l == r && (l == 1 || prime(l)))
        {
            f = 0;
        }
        else if((l == 1 && r== 2) ||(l == 1 && r == 3) || (l == 2 && r == 3))
        f = 0;
        if(f == 0)
        cout << -1 << endl;
        else
        {
            if(l == r)
            {
                if(l%2 == 0)
                cout << l/2 << " " << l/2 << endl;
                else
            {
                int x = d(l);
                cout << x << " " << l-x << endl;
            }
            }
            else
            {
                if(l%2 != 0 && l!= 1)
                {
                    l +=1;
                }
                else if( l == 1)
                {
                    l += 3;
                }
                else if( l == 2)
                {
                    l += 2;
                }
                cout << l/2 << " " << l/2 << endl;
            }
        }
    }
}