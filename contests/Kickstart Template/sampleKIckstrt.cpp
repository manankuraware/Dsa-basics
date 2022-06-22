#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cases = 0;
    while (t--)
    {
        cases++;
        string str;
        cin >> str;
        if (str.back() == 'A' || str.back() == 'E' || str.back() == 'I' || str.back() == 'O' || str.back() == 'U' || str.back() == 'a' || str.back() == 'e' || str.back() == 'i' || str.back() == 'o' || str.back() == 'u')
        {
            cout << "Case #" << cases << ": " << str << " is ruled by Alice." << endl;
        }
        else if (str.back() == 'y' || str.back() == 'Y')
        {
            cout << "Case #" << cases << ": " << str << " is ruled by nobody." << endl;
        }
        else
            cout << "Case #" << cases << ": " << str << " is ruled by Bob." << endl;
    }
}