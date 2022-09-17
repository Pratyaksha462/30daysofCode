//Codechef Problem: Faraway

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long int sum = 0;
        long long int h = m / 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > h)
                sum = sum + abs(a[i] - 1);
            else
                sum = sum + abs(a[i] - m);
        }

        cout << "\n"
             << sum;
    }

    return 0;
}
