// Print all possible permutations of a string
/*
#include <bits/stdc++.h>
using namespace std;
void Permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        Permutation(ros, ans + ch);
    }
}
int main()
{
    Permutation("ABC", "");
    return 0;
}
*/

// Count the number of paths possible from start point to end point in gameboard
/*
#include <bits/stdc++.h>
using namespace std;
int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;
}
int main()
{
    cout << countPath(0, 3);
    return 0;
}
*/

// Count the number of paths possible in a maze
#include <bits/stdc++.h>
using namespace std;
int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}
int main()
{
    cout<<countPathMaze(2, 0, 0);
    return 0;
}