// Black&White Ring Game
// Problem Code:
// RING_GAME
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        cin>>a[i];
        int frq[2];
        frq[0]=0;
        frq[1]=0;
        if(a[1]==a[n])
        frq[a[1]]++;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i+1])
        frq[a[i]]++;
        
    }
    int k=min(frq[0],frq[1])&1;
    if(k)
    cout<<"\nAlice";
    else
    cout<<"\nBob";
        
        
        
    }
    return 0;
}
