// ThreeSum Problem

// Given an array and a value ,find if there exists three numbers whose sum is equal to the given value .
// n=6 , target =24
// 12 3 7 1 6 9

// true(12,3,9)

// 2 pointer Technique

// 1.Sort the array
// 2.Traverse the array and fix the first element of the triplet.
// the problem reduces to find if there exist two elements having sum equal to x-array[i].

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo < hi)
        {
            int curr = a[i] + a[lo] + a[hi];
            if (curr == target)
            {
                found = true; 
            }
            if (curr < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }
    if (found)
    {
        cout << "True" ;
    }
    else
    {
        cout << "False" ;
    }
   
}
