#include <bits/stdc++.h>
#pragma GCC optimize("O2,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;


#include <bits/extc++.h> 
using namespace __gnu_pbds;

template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
    tree_order_statistics_node_update>;


typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll>   pl;
typedef pair<ld, ld>   pd;
typedef vector<int> vi;
typedef vector<ll>  vl;
typedef vector<ld>  vd;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define PRECISION std::cout << std::fixed << std::setprecision(20);
#define DBPRECISION std::cout << std::fixed << std::setprecision(4);
#define iter(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define _f first
#define _s second
const char nl   = '\n';
const int  INF  = (1 << 30) - 1;
const ll   LINF = 1e18;
const ld   PI   = 3.14159265358979323846L;
const ld   E    = 2.71828182845904523536L;
const ld   eps  = 1e-6;
#define dbx(x) cout << x << endl;
#define dbn(x) cout << x << nl;
#define dba(x) cout << x << " ";

#define res cout << "Case #" << curr << ": "
int main(){
    FASTIO
    PRECISION
    int qr;
    cin >> qr;
    for(int curr = 1; curr <= qr; curr++){
        string s,t;
        cin >> s >> t;
        int p1 = 0, p2 = 0;
        int ans = 0;
        while(p1 < (int)s.size() && p2 < (int)t.size()){
            if(s[p1] == t[p2]){
                p1++;
                p2++;
            }else{
                p2++;
                ans++;
            }
        }
        if(p1 != (int)s.size()){
            res << "IMPOSSIBLE\n";
        }else{
            ans += (int)t.size() - p2;
            res << ans << nl;
        }
    }
}       