#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define Max 10000000000000000
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll a[100007],ans,m[100007];
vector<ll> g[100007];

void dfs(ll u){
    if(!g[u].size()){
        m[u]=a[u];
        return;
    }
    vector<ll> val;
    val.pb(a[u]);
    for(ll i=0;i<g[u].size();i++){
        ll v=g[u][i];
        dfs(v);
        val.pb(m[v]);
    }
    sort(all(val));
    m[u]=max(val[1],a[u]);
    for(ll i=1;i<val.size();i++) ans+=val[i];
    ans-=m[u];
}

int main()
{   
    
    ll t,ii=0;
    cin>>t;

    while(t--){
        
        ll n;
        cin>>n;

        ans=0;
        for(ll i=0;i<=n;i++){
            g[i].clear();
            a[i]=0;
            m[i]=0;
        }

        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=1;i<=n;i++){
            ll x;
            cin>>x;

            g[x].pb(i);
        }

        dfs(0);

        cout<<"Case #"<<++ii<<": "<<ans+m[0]<<endl;
    }    

    return 0;
}
