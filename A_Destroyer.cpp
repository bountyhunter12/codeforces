//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int N = 1e5 + 9;

void merge(int a[],int l, int r, int m)
{
    int m1 = m-l+1;
    int m2 = r-m+1;

    int s1[m1],s2[m2];
    for(int i = 0; i < m1; i++)
    {
        s1[i] = a[i+l];
    }
    for(int i = 0; i < m2; i++)
    {
        s2[i] = a[i+m+1];
    }
    int i =0,j=0,k=l;
    while(i < m1 && j < m2)
    {
        if(s1[i] < s2[j])
        {
            a[k] = s1[i];
            i++;
        }
        else
        {
            a[k] = s2[j];
            j++;
        }
        k++;
    }
    while(i < m1)
    {
        a[k] = s1[i];
        i++;
        k++;
    }
    while(j < m2)
    {
        a[k] = s2[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int l,int r)
{
    if(l < r)
    {
        int m = l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);

        merge(a,l,r,m);

    }
}

int32_t main()
{
    int n; cin >> n;
    int a[n];
    for(int i =0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a,0,n-1);

    for(int i =0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

