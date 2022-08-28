//Codechef Problem:Brackets

#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  int t = 1;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int h = 0;
    int max1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '(')
        h = h + 1;

      if (s[i] == ')')
        h = h - 1;
      max1 = max(max1, h);
    }
    string a;
    for (int i = 0; i < (max1); i++)
      a = a + "(";
    for (int i = 0; i < (max1); i++)
      a = a + ')';
    cout << "\n"
         << a;
  }
  return 0;
}
