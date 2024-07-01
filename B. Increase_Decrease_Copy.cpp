/* You are given two integer arrays: array a of length n and array b of length n+1.

You can perform the following operations any number of times in any order:

choose any element of the array a and increase it by 1;
choose any element of the array a and decrease it by 1;
choose any element of the array a, copy it and append the copy to the end of the array a.
Your task is to calculate the minimum number of aforementioned operations (possibly zero) required to transform the array a into the array b. It can be shown that under the constraints of the problem, it is always possible.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.

Each test case consists of three lines:

the first line contains a single integer n (1≤n≤2⋅105);
the second line contains n integers a1,a2,…,an (1≤ai≤109);
the third line contains n+1 integers b1,b2,…,bn+1 (1≤bi≤109).
Additional constraint on the input: the sum of n over all test cases doesn't exceed 2⋅105.

Output
For each test case, print a single integer — the minimum number of operations (possibly zero) required to transform the array a into the array b.

Example
input
3
1
2
1 3
2
3 3
3 3 3
4
4 2 1 2
2 1 5 2 3
output
3
1
8
Note
In the first example, you can transform a into b as follows: [2]→[2,2]→[1,2]→[1,3].*/
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
    int n; cin >> n;
    int a[n],b[n+1];

    for(int i=0; i < n; i++)
    cin >> a[i];
    for (int i = 0; i < n+1; i++)
    cin >> b[i];

    int ans=0;
    for(int i = 0; i < n; i++)
    ans += abs(a[i]-b[i]);

    int x=INT_MAX;
    //cout << b[n] << endl;
    for(int i=0; i < n; i++)
    {
      if(b[n] >= min(a[i],b[i]) && b[n]<= max(a[i],b[i])) x=0;

      x = min(x,abs(a[i]-b[n]));
      x = min(x,abs(b[i]-b[n]));

    }
    cout << ans+x+1 << endl;
  }
  
}
