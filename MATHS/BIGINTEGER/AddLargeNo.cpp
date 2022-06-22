#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<ll>
#define logArr(arr,a,b) for(int i=(a);i<=(b);i++) cout<<(arr[i])<<"";cout<<endl;
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
#define eb emplace_back

vi add(vi x,vi y)
{
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    ll len =min(x.size(),y.size());
    ll carry=0;
    vi ans;
    loop(i,0,len-1){
        ll val =x[i]+y[i]+carry;
        carry=val/10;
        ans.eb(val%10);
    }
    if(x.size()> len){
    
    loop(i,len,x.size()-1){
        ll val = x[i]+ carry;
        carry = val/10;
        ans.eb(val%10);
    }
    }
    if(y.size()> len){
    
    loop(i,len,y.size()-1){
        ll val = y[i]+ carry;
        carry = val/10;
        ans.eb(val%10);
    }
    }
    while (carry)
    {
        ans.eb(carry%10);
        carry /=10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        vi s;
        vi d;
        loop(i,0,a.size()-1){
            s.eb(a[i]-'0');
        }
        loop(i,0,b.size()-1){
            d.eb(b[i]-'0');
        }
vi sum =add(s,d);
logArr(sum,0,sum.size()-1)
    }
    return 0;
}