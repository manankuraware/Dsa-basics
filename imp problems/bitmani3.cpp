// Write a program to find a unique number in an array where all numbers except one are present twice
// {2,4,6,3,4,6,2}
/*
#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n)
{
    int xorsum=0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;

}
int main()
{
int arr[] = {1,2,3,4,1,2,3};
cout<<unique(arr,7)<<endl;
return 0;
}
*/

// Write a programm to find 2 unique numbers in an array where all numbers except two are present twice
//{2,4,6,4,7,5,6,2}
/*
#include <bits/stdc++.h>
using namespace std;
int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0, pos;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int nwXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            nwXor = (nwXor ^ arr[i]);
        }
    }
    cout << nwXor << endl;
    cout << (tempxor ^ nwXor) << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
    unique(arr, 8);
    return 0;
}
*/

// Wap to find a unique number in an array where all numbers except one are present thrice

#include <bits/stdc++.h>
using namespace std;
bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int UniQ(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << UniQ(arr, 10) << endl;

    return 0;
}