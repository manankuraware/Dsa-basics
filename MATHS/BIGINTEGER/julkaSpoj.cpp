// we are given sum=a+b and diff=a-b. to find a?b?
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
vi DivisionBy2(vi x)
{
    vi ans;
    ll rem=0;
    loop(i,0,x.size()-1){
        if (rem)
        {
            rem=rem*10+x[i];
            ans.eb(rem/2);
            rem=rem%2;
        }
        else{
            if (x[i]<2)
            {
                rem+=x[i];
                ans.eb(0);
            }
            else
            {
                rem=x[i]%2;
                ans.eb(x[i]/2);
            }   
        }
    }
        vi result;
        int i=0;
        while (ans[i]==0) i++;
        for (; i < ans.size(); i++)
        {
            result.eb(ans[i]);
        }
        return result;
    
}
vi sub(vi x,vi y){
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    vi ans;
    ll len=y.size();
    loop(i,0,len-1){
        if(x[i]<y[i])
        {
            x[i+1]--;
            ans.eb(10+x[i]-y[i]);
        }
        else
        {
            ans.eb(x[i]-y[i]);
        }
    }
    if(x.size()>len){
        loop(i,len,x.size()-1){
            if (x[i]<0)
            {
                x[i+1]--;
                ans.eb(10*x[i]);
            }
            else
            {
                ans.eb(x[i]);
            }
        }
    }
    reverse(ans.begin(),ans.end());
    vi result ;
    int i=0;
    while(ans[i]==0)i++;
    for(;i<ans.size();i++){
        result.eb(ans[i]);
    }
    return result;
}

int main()
{
    int t=10;
while (t--)
{
    string a,b;
    cin>>a>>b;
    vi s;
    vi d;
    loop(i,0,a.size()-1)
    {
        s.eb(a[i]-'0');
    }
    loop(i,0,b.size()-1)
    {
        d.eb(b[i]-'0');
    }
    vi temp_sum=add(s,d);
    vi div=DivisionBy2(temp_sum);
    vi diff=sub(s,div);
    logArr(div,0,div.size()-1);
    logArr(diff,0,diff.size()-1);
}
return 0;
}