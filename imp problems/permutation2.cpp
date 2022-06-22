// Given a collection of numbers ,nums, that might contain duplicates , return all possible unique permutations in any order
// Avoid duplicates
#include <bits/stdc++.h>
using namespace std;
void helpr(vector<int> a, vector<vector<int>> &ans, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        if (i != idx and a[i] == a[idx])
            continue;
        swap(a[i], a[idx]);
        helpr(a, ans, idx + 1);
    }
}
vector<vector<int>> permute(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    helpr(nums, ans, 0);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<vector<int>> res = permute(a);
    for (auto v : res)
    {
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}