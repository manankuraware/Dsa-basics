// To find prine numbers
#include <bits/stdc++.h>
using namespace std;

void PrimeSieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " " << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    PrimeSieve(n);
    return 0;
}