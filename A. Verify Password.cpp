/* Monocarp is working on his new site, and the current challenge is to make the users pick strong passwords.

Monocarp decided that strong passwords should satisfy the following conditions:

password should consist only of lowercase Latin letters and digits;
there should be no digit that comes after a letter (so, after each letter, there is either another letter or the string ends);
all digits should be sorted in the non-decreasing order;
all letters should be sorted in the non-decreasing order.
Note that it's allowed for the password to have only letters or only digits.

Monocarp managed to implement the first condition, but he struggles with the remaining ones. Can you help him to verify the passwords?

Input
The first line contains a single integer t (1≤t≤1000) — the number of testcases.

The first line of each testcase contains a single integer n (1≤n≤20) — the length of the password.

The second line contains a string, consisting of exactly n characters. Each character is either a lowercase Latin letter or a digit.

Output
For each testcase, print "YES" if the given password is strong and "NO" otherwise.

Example
input
5
4
12ac
5
123wa
9
allllmost
5
ac123
6
011679
output
YES
NO
YES
NO
YES
Note
In the second testcase, the letters are not sorted in the non-decreasing order.

In the fourth testcase, there is a digit that comes after a letter — digit '1' after a letter 'c'.*/
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
    int n,f=0; cin >> n;
    string s,s1; cin >> s;
    s1 = s;
    sort(s1.begin(),s1.end());
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i]>='A' && s[i] <='Z'){
        for (int  j= i+1; i < s.size(); j++)
        {
         if(isdigit(s[j])){
          f=1;
          break;
         }
        }
        
      }
    }
    if(f)
    cout << "NO" << endl;
    else
    {
      if(s1 != s)
      cout << "NO" << endl;
      else
      cout << "YES" << endl;
    }
    
  }
  
}
