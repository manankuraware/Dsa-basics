#include "bits/stdc++.h"  
  
using namespace std;  
  
#define ll              long long int  
  
static const int maxn = 1e5 + 5;  
  
struct node  
{  
      int v;  
      ll w;  
      node(int v = 0, ll w = 0) : v(v), w(w) {}  
};  
  
int tnode;  
vector <node> graph[maxn];  
int subtreeSize[maxn];  
  
inline void dfs(int u = 1, int p = -1)  
{  
      subtreeSize[u] = 1;  
      for (node g : graph[u])  
      {  
            if (g.v == p) continue;  
            dfs(g.v, u);  
            subtreeSize[u] += subtreeSize[g.v];  
      }  
}  
  
inline ll getCost(int u = 1, int p = -1)  
{  
      ll cost = 0;  
      for (node g : graph[u])  
      {  
            if (g.v == p) continue;  
            int minSize = min(subtreeSize[g.v], tnode - subtreeSize[g.v]);  
            cost += (g.w * minSize) + getCost(g.v, u);  
      }  
      return cost;  
}  
  
int main()  
{ 
      int tc;  
      scanf("%d", &tc);  
      for (int tcase = 1; tcase <= tc; tcase++)  
      {  
            scanf("%d", &tnode);  
            for (int e = 1; e < tnode; e++)  
            {  
                  int u, v;  
                  ll w;  
                  scanf("%d %d %lld", &u, &v, &w);  
                  graph[u].emplace_back(v, w);  
                  graph[v].emplace_back(u, w);  
            }  
            dfs();  
            ll ans = getCost();  
            printf("Case #%d: %lld\n", tcase, ans * 2);  
            for (int i = 1; i <= tnode; i++) graph[i].clear();  
      }  
}  