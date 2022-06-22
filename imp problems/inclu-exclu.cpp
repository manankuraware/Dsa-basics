// How many numbers between 1 and 1000 are divisible by 5 or 7

#include <bits/stdc++.h>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n / a;    //let a=5 so number divisible by 5 is c1
    int c2 = n / b;    //let b=7 so number divisible by 7 is c2
    int c3 = n / (a * b);   // number divisible by 5 and 7 that is intersection of a,b is c3
    return c1 + c2 + -c3;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << divisible(n, a, b);
    return 0;
}