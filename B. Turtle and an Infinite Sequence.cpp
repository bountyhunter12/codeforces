/* There is a sequence a0,a1,a2,… of infinite length. Initially ai=i for every non-negative integer i.

After every second, each element of the sequence will simultaneously change. ai will change to ai−1∣ai∣ai+1 for every positive integer i. a0 will change to a0∣a1. Here, | denotes bitwise OR.

Turtle is asked to find the value of an after m seconds. In particular, if m=0, then he needs to find the initial value of an. He is tired of calculating so many values, so please help him!

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). The description of the test cases follows.

The first line of each test case contains two integers n,m (0≤n,m≤109).

Output
For each test case, output a single integer — the value of an after m seconds.

Example
input
9
0 0
0 1
0 2
1 0
5 2
10 1
20 3
1145 14
19198 10
output
0
1
3
1
7
11
23
1279
19455
Note
After 1 second, [a0,a1,a2,a3,a4,a5] will become [1,3,3,7,7,7].

After 2 seconds, [a0,a1,a2,a3,a4,a5] will become [3,3,7,7,7,7]
.*/
// heuristically programmed
// HAL 9000
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;
const int INF = 1e9 + 10;
int32_t main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m; cin >> n >> m;

    int l = max(n-m, 0LL);
    int r = n+m;

    int ans=0,x,y;
    for(int i = 0; i < 32; i++)
    {
      x = r/(1<<i);
      if(x % 2)
      {
        ans |=(1<<i);
        continue;
      }
      y = l/(1<<i);
      if(x != y)
      {
        ans |=(1<<i);
      }
    }

    cout << ans << endl;
  }

  
}
