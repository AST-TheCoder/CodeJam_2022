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

int main()
{   
    
    ll t,ii=0;
    cin>>t;

    while(t--){
        ll n,s=0,mn=1073741823;
        cin>>n;

        vector<ll> v,p;
        for(ll i=1;i<=1000000000;i*=2){
            p.pb(i);
            s+=i;
        }

        for(ll i=999999931;i<=1000000000;i++){
            v.pb(i);
            s+=i;
        }
        for(ll i=1;i<=100;i++){
            if(i>30) cout<<v[i-31];
            else cout<<p[i-1];
            if(i==100) cout<<endl;
            else cout<<" ";
        }

        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.pb(x);
            s+=x;
        }
        sort(all(v),greater<ll>());
        s/=2;
        vector<ll> ans;
        ll id=0;
        while(s>mn){
            if(v[id]<=s){
                s-=v[id];
                ans.pb(v[id]);
            }
            id++;
        }
        for(ll i=0;i<p.size();i++){
            if(s%2) ans.pb(p[i]);
            s/=2;
        }
        for(ll i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i+1==ans.size()) cout<<endl;
            else cout<<" ";
        }
    } 

    return 0;
}
