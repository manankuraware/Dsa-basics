//Problem: Given A,B,C Towers
// We have to move blocks from A to C
// and big block is below small block
#include <bits/stdc++.h>
using namespace std;
void TowerOFHanoi(int n, char src, char dest, char helpr)
{
    if (n == 0)
    {
        return; // base case
    }
    TowerOFHanoi(n - 1, src, helpr, dest);
    cout << "Move From " << src << " TO " << dest << endl;
    TowerOFHanoi(n - 1, helpr, dest, src);
}
int main()
{
    TowerOFHanoi(3, 'A', 'C', 'B');
    return 0;
}