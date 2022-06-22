// Convert string into upper case and lower case

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "adsfjhalksdif";
    // convert to upper case

    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //         str[i] -= 32;
    // }
    // cout << str;

    // convert to lower case
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //         str[i] += 32;
    // }
    // cout << str;

    // using stl
    string s = "fjhalksdif";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}