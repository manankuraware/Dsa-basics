#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                x++;
            else
                y++;
        }
        if (n % 2 || (y % 2 == 0 && x % 2 == 0) || x == y)
        {
            cout << "Yes";
        }
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}