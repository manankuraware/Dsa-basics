#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        string str = to_string(n);
        ll len = str.length();
        if (d == 0)
        {
            ll idx2 = len;
            for (int i = 0; i < len; i++)
            {
                if (str[i] == '0')
                {
                    str[i] = '1';
                    idx2 = i;
                    break;
                }
            }
            for (int j = idx2 + 1; j < len; j++)
            {
                str[j] = '1';
            }
        }

        else if (d == 9)
        {
            if (str[0] == '9')
            {
                for (int i = 0; i < len; i++)
                {
                    str[i] = '0';
                }
                str = "1" + str;
            }
            else
            {
                int ind = len;
                for (int i = 0; i < len; i++)
                {
                    if (str[i] == '9')
                    {
                        for (int k = i - 1; k >= 0; k--)
                        {
                            if (str[k] <= '7')
                            {
                                str[k]++;
                                ind = k;
                                goto cvv;
                            }
                        }
                            for (int i = 0; i < len; i++)
                            {
                                str[i] = '0';
                            }
                            str = "1" + str;
                            goto fvv;
                        }
                    }
                    cvv:;
                    for (int j = ind + 1; j < len; j++)
                    {
                        str[j] = '0';
                    }
                    fvv:;
                }}
                else
                {
                    int i = 0;
                    for (i = 0; i < len; i++)
                    {
                        if ((str[i] - 48) == d)
                        {
                            str[i] = str[i] + 1;
                            break;
                        }
                    }
                    for (int j = i + 1; j < len; j++)
                    {
                        str[j] = '0';
                    }
                }
                ll nn = stoll(str);
                cout << nn - n << endl;
            }
        }
