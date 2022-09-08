//Codechef Problem : Broken Phone
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x)
        cout<<"\nREPAIR";
        else if(x>y)
        cout<<"\nNew PHONE";
        else
        cout<<"\nANY";
    }
    return 0;
}
