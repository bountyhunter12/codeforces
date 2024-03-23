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
        int a=0;
        int ss[10][10] = {1,1,1,1,1,1,1,1,1,1,
                          1,2,2,2,2,2,2,2,2,1,
                          1,2,3,3,3,3,3,3,2,1,
                          1,2,3,4,4,4,4,3,2,1,
                          1,2,3,4,5,5,4,3,2,1,
                          1,2,3,4,5,5,4,3,2,1,
                          1,2,3,4,4,4,4,3,2,1,
                          1,2,3,3,3,3,3,3,2,1,
                          1,2,2,2,2,2,2,2,2,1,
                          1,1,1,1,1,1,1,1,1,1,};
        for(int i =0; i < 10; i ++)
        {
            for(int j = 0; j <10; j++)
            {
                char x; cin >> x;
                if(x == 'X') a += ss[i][j];
            }
        }
        cout << a << endl;
            
    }
}