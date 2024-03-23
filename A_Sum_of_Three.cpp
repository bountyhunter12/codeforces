//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        int k = 1,s=0;
        for(int i =0; i < n; i++) cin >> v[i];
        for(int i =1; i < n; i++)
        {
            if(v[i] == v[i-1]) k++;
            else
            {
                s += (k*(k-1))/2;
                k=1;
            }
        }
        cout << (n*(n-1)/2)-s << endl;

    }
}
