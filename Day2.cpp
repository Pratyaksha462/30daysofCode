//Codeforces Problem : A. Traveling Salesman Problem
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
      int x, y;
      int p = 0;
      int l = 0;
      int k = 0, m = 0;
      for (int i = 1; i <= n; i++)
      {
        cin >> x >> y;
        p = max(p, x);
        l = max(l, y);
        k = min(k, x);
        m = min(m, y);
      }

    // for (int i = 0; i < n; i++)
    // {

    //  }
    cout << "\n"
         << ((p - k) * 2) + ((l - m) * 2);
  }
  return 0;
}
