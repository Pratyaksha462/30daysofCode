//Codechef Problem : Balls and Boxes
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n < k)
        {
            cout << "\nNO";
        }
        else if (n == k && n != 1)
            cout << "\nNO";
        else
        {
            if (n == 1 && k == 1)
                cout << "\nYES";
            else
            {
                int h = ((k) * (k + 1)) / 2;
                if (n >= h)
                    cout << "\nYES";
                else
                    cout << "\nNo";
            }
        }
    }
    return 0;
}
