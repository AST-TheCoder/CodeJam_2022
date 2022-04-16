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
        ll a[3][4],b[4],s=0;
        for(ll i=0;i<4;i++) b[i]=Max,s+=Max;
        for(ll i=0;i<3;i++){
            for(ll j=0;j<4;j++){
                cin>>a[i][j];
                s-=b[j];
                b[j]=min(b[j],a[i][j]);
                s+=b[j];
            }
        }
        cout<<"Case #"<<++ii<<":";
        if(s<1000000){
            cout<<" IMPOSSIBLE"<<endl;
            continue;
        }
        s=1000000;
        for(ll i=0;i<4;i++){
            if(b[i]<=s){
                cout<<" "<<b[i];
                s-=b[i];
            }
            else{
                cout<<" "<<s;
                s=0;
            }
        }
        cout<<endl;
    }    

    return 0;
}
