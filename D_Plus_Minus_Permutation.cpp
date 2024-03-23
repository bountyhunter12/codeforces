//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;
int gcd(int a,int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,x,y; cin >> n >> x >> y;
        int p = lcm(x,y);
        int k = n/p;
        int tx = n/x - k;
        int ty = n/y - k;
        int s1 = (ty*(ty+1))/2;
        int s = ((n*(n+1))/2) -((n-tx)*((n-tx+1))/2);
        cout << s - s1 << endl;
    }
}