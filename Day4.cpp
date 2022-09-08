//Codechef Problem : Permutation Clear
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
        cin >> n;
        map<int, int> mp;
        set<int> s1, s2;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            s1.insert(a[i]);
        }
        int m;
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
            s2.insert(b[i]);
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            if (s2.find(a[i]) == s2.end())
                cout << " "
                     << a[i];
        }
      
    }
    return 0;
}
