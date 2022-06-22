#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);

for (int i = 0; i < v.size(); i++)
{
   // cout<<v[i]<<endl;  //1 2 3 
}
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++){
    //cout<<*it<<endl;//1 2 3 
}
for(auto ele:v){
    //cout<<ele<<endl; //1 2 3 
}
vector<int> v2 (3,50) ; //3 elements with value 50 50 50
swap(v,v2);
for(auto ele:v){
    cout<<ele;
}
for(auto ele:v2){
    cout<<ele;
}
cout<<endl;
sort(v.begin(),v.end());
for(auto ele:v){
    cout<<ele;//1 2 3 
}
return 0;
}