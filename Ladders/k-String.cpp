#include <bits/stdc++.h>
using namespace std;
int freq[26];

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'a']++;
        }
        // for (int i = 0; i < 26; i++)
        //     cout << "\n"
        //          << char(i + 97);
        // bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % k != 0 && freq[i] != 0)
            {
                cout << "\n-1";
                return 0;
            }
        }

        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                for (int h = 1; h <= (freq[j] / k); h++)
                    cout << char(j + 97);
            }
        }
    }
    return 0;
}
