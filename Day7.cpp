// Question of the Day 7: Chef is given two arrays A and B of length N each.
// In one operation Chef can choose one element of A and one element of B and increase them by 1.
// More formally: Chef can pick two integers i, j(1≤i,j≤N) and increment A_i and B_j by 1.
// Determine the minimum number of operations required to make A and B equal.
// Output -1 if it is not possible to make A and B equal.


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
    long long int a[n];
    long long int b[n];
    long long int sum = 0;
    long long int diff = 0;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    for (int i = 0; i < n; i++)
    {
      sum = sum + abs(a[i] - b[i]);
      diff = diff + (a[i] - b[i]);
    }
    if (sum % 2 == 0)
    {
      if (diff == 0)
        cout << "\n"
             << sum / 2;
      else
        cout << "\n-1";
    }
    else
      cout << "\n-1";
  }
  return 0;
}
