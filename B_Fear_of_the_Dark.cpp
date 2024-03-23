
//heuristically programmed
//HAL 9000
#include<bits/stdc++.h>
using namespace std;
#define int long long  int
#define endl "\n"
const int N = 1e5 + 9;
const int INF =1e9+10;

int32_t main()
{
    int t; cin >> t;
    while(t--)
    {
        
         int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;

        double AP=sqrt((px-ax)*(px-ax)+(py-ay)*(py-ay));
        double BP=sqrt((px-bx)*(px-bx)+(py-by)*(py-by));
        double AB=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))/2;
        double OA=sqrt(ax*ax+ay*ay);
        double OB=sqrt(bx*bx+by*by);
        double s=1e3;
        if(BP <= AB || AP<=AB)
        {
            s =min(s,AB);
        }
        if(AB*2 <= 2*BP)
        {
            s =min(s,BP);
        }
        if(AB*2 <= 2*AP)
        {
            s =min(s,AP);
        }
 
        cout<< fixed <<setprecision(10); 
        cout  << s << endl;
    }
}
