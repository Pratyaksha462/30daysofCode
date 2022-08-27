Codechef Problem:Zero Ones Equal One Zeros

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
    if (n % 2 == 0)
    {
      cout << "\n1";
      for (int i = 2; i < n; i++)
        cout << "0";
      cout << "1";
    }
    else
    {
      int k = (n + 1) / 2;
      cout << "\n";
      for (int i = 1; i <= n; i++)
      {
        if (i == k)
          cout << "1";
        else
          cout << "0";
      }
    }

    // 3=010
    // 4=1001
    // 5 00100
    // 6 100001
  }
  return 0;
}
