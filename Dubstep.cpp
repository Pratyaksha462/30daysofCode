#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
   // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool falg = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            {
                i = i + 2;
                if (!falg)
                    cout << " ";

                continue;
            }
            else
            {
                falg = false;
                cout << " "
                     << s[i];
            }
        }
    }
    return 0;
}
