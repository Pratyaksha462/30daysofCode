// Codechef Problem : Candy Distribution


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if(n%m==0)
        {
            int h=n/m;
            if(h%2==0)
            cout<<"\nYes";
            else
            cout<<"\nNo";
            
        }
        else
        cout<<"\nNo";
    }
    return 0;
}
