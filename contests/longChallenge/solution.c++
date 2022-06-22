#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            int ans = 2;
            int z = x * x + y * y;
            for (int i = 1; i < 100; i++)
            {
                if (i * i == z)
                   { ans = 1;
                break;}
            }
            cout << ans << "\n";
        }
    }

    return 0;
}