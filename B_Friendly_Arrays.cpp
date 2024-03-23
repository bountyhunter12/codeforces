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
            int n,m; cin >> n >> m;
            int a[n],b[m];
            int xoor = 0, oor = 0;
            for(int i = 0; i < n; i++){
                cin >> a[i];
                xoor ^= a[i];
            }
            for(int i = 0; i < m; i++){
                cin >> b[i];
                oor |= b[i];
            }
            if(n%2){
                cout << xoor << " " << (xoor|oor) << endl;
            }
            else{
                cout << ((xoor|oor)^oor) << " " << xoor << endl;
            }
            
    }
}