// Tiling Problem
// Given 2*n board and tiles of size 2*1, count the number of ways to tile the given board using these tiles
/*
#include <bits/stdc++.h>
using namespace std;
int tillingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return tillingWays(n-1) + tillingWays(n-2);
}
int main()
{
   cout<<tillingWays(4);
    return 0;
}
*/
//  Friends pairing problem
// find the number of ways in which n friends can remain single or can be paired up.
/*
#include <bits/stdc++.h>
using namespace std;
int FriendsPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    return FriendsPairing(n - 1) + FriendsPairing(n - 2) * (n - 1);
}
int main()
{
cout<<FriendsPairing(4);
    return 0;
}
*/

// 0-1 knapsack problem
// put n items with given weight and value in a knapsack of capacity W to get the maximum total value in the knapsack

#include <bits/stdc++.h>
using namespace std;
int knapsack(int value[], int wt[], int n, int w)
{

    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return knapsack(value, wt, n - 1, w);
    }
    return max(knapsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, w));
}
int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};

    cout << knapsack(value, wt, 3, 50);
    return 0;
}