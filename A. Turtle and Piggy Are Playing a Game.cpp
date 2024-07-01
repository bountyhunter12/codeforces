/* Turtle and Piggy are playing a number game.

First, Turtle will choose an integer x, such that l≤x≤r, where l,r are given. It's also guaranteed that 2l≤r.

Then, Piggy will keep doing the following operation until x becomes 1:

Choose an integer p such that p≥2 and p∣x (i.e. x is a multiple of p).
Set x to xp, and the score will increase by 1.
The score is initially 0. Both Turtle and Piggy want to maximize the score. Please help them to calculate the maximum score.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). The description of the test cases follows.

The first line of each test case contains two integers l,r (1≤l≤r≤109,2l≤r) — The range where Turtle can choose the integer from.

Output
For each test case, output a single integer — the maximum score.

Example
input
5
2 4
3 6
2 15
6 22
114514 1919810
output
2
2
3
4
20
Note
In the first test case, Turtle can choose an integer x, such that 2≤x≤4. He can choose x=4. Then Piggy can choose p=2 for 2 times. After that, x will become 1, and the score will be 2, which is maximized.

In the second test case, Turtle can choose an integer 3≤x≤6. He can choose x=6. Then Piggy can choose p=2, then choose p=3. After that, x will become 1, and the score will be 2, which is maximum.

In the third test case, Turtle can choose x=12.

In the fourth test case, Turtle can choose x=16.
*/

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
    int l,r; cin >> l >> r;
    
    cout << (int)log2(r) << endl;
  }
  
}
