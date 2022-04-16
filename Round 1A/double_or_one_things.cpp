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
        string s;
        cin>>s;

        cout<<"Case #"<<++ii<<": ";
        for(ll i=0;i<s.size()-1;i++){
            ll chk=0;
            for(ll j=i+1;j<s.size();j++){
                if(s[i]<s[j]) chk=1;
                if(s[i]!=s[j]) break;
            }
            if(chk) cout<<s[i]<<s[i];
            else cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    } 

    return 0;
}
