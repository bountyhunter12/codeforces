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
        int a, b, n;
        cin >> a >> b >> n;

        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
          sort(x.begin(), x.end());
         long long int s=0;
         for(auto i:x)
         {
            if(b+i <= a)
            b+=i;
            else
            {
                s += (b-1);
                b = min(1+i,a);
            }
            s += b;
         }
         
          cout << s << endl;;

         
    }
}