#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<ll>
#define logArr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<"";cout<<endl;
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
#define eb emplace_back
void multiply(vi &ans, int num)
{
    int carry = 0;
    loop(i,0,ans.size()-1)
    {
        ll prod = ans[i]*num + carry;
        carry = prod / 10;
        ans[i] = prod % 10;
    }
    while (carry)
    {
        ans.eb(carry % 10);
        carry /= 10;
    }
}

void factorial(int n)
{
    vi ans;
    ans.eb(1);
    loop(i,2,n){
        multiply(ans, i);
    }
    reverse(ans.begin(), ans.end());
    logArr(ans,0,ans.size()-1);
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}