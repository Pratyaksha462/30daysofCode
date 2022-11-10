#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x[m + 1], y[m + 1];
        int x1[n + 1][n + 1];
        for (int i = 0; i < m; i++)
        {
            cin >> x[i] >> y[i];
         
        }
        if (m >= n)
            cout << "\nNo";
        else
            cout << "\nYes";
    }
    return 0;
}
