//CodeChef Problem:Odd Repeat

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,k,s;
        cin>>n>>k>>s;
        int x=(s-(n*n))/(k-1);
        cout<<"\n"<<x;
        
        
    }
    return 0;
}
