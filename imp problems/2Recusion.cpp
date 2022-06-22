// Reverse String Using Recursion
/*
#include <bits/stdc++.h>
using namespace std;

void reverse(string s)
{                        //remove pos 1 element of str and print base/last number
    if (s.length() == 0) //base case
    {
        return;
    }
    string ROS = s.substr(1);
    reverse(ROS);
    cout << s[0];
}
int main()
{
    reverse("Manan");
    return 0;
}
*/

// Replace pi with 3.14 in string
/*
#include <iostream>
using namespace std;
void replacePi(string s)
{
    if (s.length() == 0) //base case
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}
int main()
{
    replacePi("pippppiiiipi");
    return 0;
}
*/

//Remove Duplicates From String
/*
#include <iostream>
using namespace std;

string RemoDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = RemoDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}
int main()
{
    cout << RemoDup("aaaabbbeeecdddd") << endl;
    return 0;
}
*/

// Move all x to the end of the string
/*
#include <bits/stdc++.h>
using namespace std;
string moveallX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    cout << moveallX("axxxbdxcwfhix") << endl;
    return 0;
}
*/

//Generate all substring of a string (out of 2^n possible substr)
/*
#include <bits/stdc++.h>
using namespace std;
void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans + ch);
}
int main()
{
    subseq("ABC", "");
    cout << endl;

    return 0;
}
*/

// Generate Substring of ASCII numbers
/*
#include <bits/stdc++.h>
using namespace std;
void subseQ(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseQ(ros, ans);
    subseQ(ros, ans + ch);
    subseQ(ros, ans + to_string(code));
}
int main()
{
    subseQ("Ab", "");
    return 0;
}
*/

// Print all Possible Words From Phone Digits

#include <bits/stdc++.h>
using namespace std;
string KeypadArr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void Keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = KeypadArr[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        Keypad(ros, ans + code[i]);
    }
}
int main()
{
    Keypad("23", "");
    return 0;
}