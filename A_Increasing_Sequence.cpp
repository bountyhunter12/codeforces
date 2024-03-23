#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
//int visited[1000000];
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            int ff;
            cin>>ff;
            v.push_back(ff);
        }
        vector<int> v1(m);
        for(int i=0;i<m;i++)
        {
            int ff;
            cin>>ff;
            v1.push_back(ff);
        }
        sort(v.begin(),v.end());
        int sum=0;
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++)
        {
            vector<int>::iterator low;
            low = lower_bound(v1.begin(), v1.end(), v[i]);
            sum+=v1[low - v.begin()];
        }
        cout<<sum<<endl;
    }
}
