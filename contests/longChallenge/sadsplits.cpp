#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int last_digit = (n % 10) % 2; // to check last digit even or odd
        n /= 10;
        int flag = 0;
        while (n)
        {
            if ((n % 10) % 2 == last_digit)
            {
                cout << "Yes"
                     << "\n";
                flag = 1;
                break;
            }
            n /= 10;
        }
        if (flag == 0)
        {
            cout << "No"
                 << "\n";
        }
    }
    return 0;
}