// Check if array is sorted or not
/*
#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}
int main()
{
    int arr[] = {1, 9, 3, 6, 5};
    cout << sorted(arr, 5) << endl;
    return 0;
}
*/

// print numbers till n
// 1. Decreasing Order  2.Increasing Order
/*
#include <iostream>
using namespace std;
void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    dec(n - 1);
}
void asc(int n)
{
    if (n == 0)
    {
        return;
    }
    asc(n-1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    asc(n);
    return 0;
}
*/

// find the first and last occurance of a number in an array

#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOccurance(arr, n, i + 1, key);
}
int LastOccurance(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArr = LastOccurance(arr, n, i + 1, key);
    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstOccurance(arr, 7, 0, 2) << endl;
    cout << LastOccurance(arr, 7, 0, 2);
    return 0;
}