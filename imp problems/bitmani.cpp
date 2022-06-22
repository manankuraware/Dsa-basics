// get Bit  at given position
/*
#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int main()
{
    cout << getBit(5, 2) << endl;
    return 0;
}
*/

// Set Bit  at given position

#include <bits/stdc++.h>
using namespace std;
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val << pos));
}
int main()
{
    // cout << setBit(5, 1);
    // cout << clearBit(5, 2);
    cout << updateBit(5, 1,1);
    return 0;
}
