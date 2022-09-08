//Codechef Problem: Mean and Median
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
            cout << "\n  " << x << " " << x << " " << x;
        else
        {
          int a[3];
          a[0]=y;
          a[1]=y;
          a[2]=(3*x)-(2*y);
          sort(a,a+3);
          cout<<"\n "<<a[0]<<" "<<a[1]<<" "<<a[2];
        }

 
    }
    return 0;

}
