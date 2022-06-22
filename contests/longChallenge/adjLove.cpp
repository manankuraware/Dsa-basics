#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;

    cin >> t;

    for (; t--;)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);

        int even = 0;
        int odd = 0;
        vector<long long> o, e;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2)
            {
                o.push_back(a[i]);
                odd++;
            }
            else
            {
                e.push_back(a[i]);
                even++;
            }
        }

        if (even == 0)
        {
            if (odd % 2 == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < odd; i++)
                {
                    cout << o[i] << " ";
                }

                for (int i = 0; i < even; i++)
                {
                    cout << e[i] << " ";
                }
            }
        }
        else if (odd <= 1)
        {
            cout << -1 << endl;
        }
        else
        {

            if (odd % 2)
            {
                for (int i = 0; i < odd - 1; i++)
                {
                    cout << o[i] << " ";
                }

                for (int i = 0; i < even; i++)
                {
                    cout << e[i] << " ";
                }
                cout << o[o.size() - 1] << endl;
            }
            else
            {
                for (int i = 0; i < odd; i++)
                {
                    cout << o[i] << " ";
                }

                for (int i = 0; i < even; i++)
                {
                    cout << e[i] << " ";
                }
            }
        }
        cout << endl;
    }
}