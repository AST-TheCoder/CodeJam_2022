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
        ll r,c;
        cin>>r>>c;
        cout<<"Case #"<<++ii<<":"<<endl;
        for(ll i=0;i<2*r+1;i++){
            for(ll j=0;j<2*c+1;j++){
                if(i+j<=1) cout<<".";
                else if(i%2){
                    if(j%2) cout<<".";
                    else cout<<"|";
                }
                else{
                    if(j%2) cout<<"-";
                    else cout<<"+";
                }
            }
            cout<<endl;
        }
    }    

    return 0;
}
