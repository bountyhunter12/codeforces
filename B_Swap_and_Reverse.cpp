//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;
int ts(int a[], int l, int r, int k) {
   if(l <= r) {
      int d = (r-l)/3;
      int m1 = l+d;
      int m2 = r-d;
      if(a[m1] == k)
         return m1;
      if(a[m2] == k)
         return m2;
      if(k < a[m1])
         return ts(a, l, m1-1, k);
      if(k > a[m2])
         return ts(a, m2+1, r, k);
       return ts(a, m1+1, m2-1, k);
   }
   return -1;
}
int32_t main()
{
    int n; cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0,r=n-1;
    int k; cin >> k;
    int d = (r-1)/3;
    
    cout << ts(a,l,r,k) << endl;
}