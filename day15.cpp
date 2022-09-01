//Codechef Problem : Teams Of Two

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
          vector<vector<int>> v;

        for (int i = 0; i < n; i++)
        {
            vector<int> v1;
            int x;
            cin >> x;
            for (int j = 0; j < x; j++)
            {
                int h;
                cin >> h;
                v1.push_back(h);
            }
            v.push_back(v1);
        }

        int t = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                set<int> s1;

                for (int a = 0; a < v[i].size(); a++)
                {
                    s1.insert(v[i][a]);
                }
                for (int k = 0; k < v[j].size(); k++)
                {
                    s1.insert(v[j][k]);
                }
                int h = s1.size();
                if (h == 5)
                    t++;
            }
        }
        if (t > 0)
            cout << "\nYes";
        else
            cout << "\nNo";
    }
    return 0;
}
