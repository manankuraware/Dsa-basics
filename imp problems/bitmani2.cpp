// Write a programm to check if a given number is power of 2
/*
#include <bits/stdc++.h>
using namespace std;
bool IsPowerof2(int n)
{
    return (n && !(n & n - 1));   // !(n & n-1) is always zero if number is 2^n Ex. 8 ie.1000 and seven ie.0111 and thier result is 0000
}
int main()
{
    cout << IsPowerof2(16);
    return 0;
}
*/

// Write a program to count the number of ones in binary representation of a number
/*
#include <bits/stdc++.h>
using namespace std;
int numberofOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;    //changing value of n till n = 0
        count++;
    }
    return count;
}
int main()
{
    cout << numberofOnes(19) << endl;
    return 0;
}
*/

// Write a program to generate all possible subsets os a set {a,b,c}
#include <bits/stdc++.h>
using namespace std;
void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++) //(1 << n ) is same as 2^n
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    subset(arr, 4);
    return 0;
}
