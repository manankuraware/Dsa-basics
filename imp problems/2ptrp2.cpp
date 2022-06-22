// Max Consecutive Ones
/*
Given an array A of 0s and 1s,we may change up to K values from 0 to 1.
return the length of longest(contigous) subarray that contains only 1s.

A[1,1,1,0,0,0,1,1,1,1,0],K=2
6 ie.[1,1,1,0,0,1,1,1,1,1,1]
*/

//  idea
//  -Find the longest subarray eith at most K zeroes
//  -if A[i]~A[j] has zeroes <=K ,we continue to increment j.
//  -if A[i]~A[j] has zeroes >K ,we increment i (as well as j).

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int zeroCount = 0, i = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)

            zeroCount++;
        while (zeroCount > k)
        {
            if (a[i] == 0)
            {
                zeroCount--;
            }
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    cout << ans;
    return 0;
}