//https://www.codechef.com/OCT20B/problems/CHEFEZQ

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto &it : v){
        cin>>it;
    }
    ll rem = v[0] - k,count = 1;
    ll i = 1;
    while(i<n && rem >=0){
        v[i]-=k;
        rem += v[i];
        i++;
        count++;
    }
    if(rem>=0){
        count+= rem/k+1;
    }
    cout<<count<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
