#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    int n;
    ll k;
    cin>>n>>k;
    vector<ll> v(n);
    ll value;
    for(int i=0; i<n; i++){
        cin>>value;
        v.push_back(value);
    }
    vector<ll> x(1,-1);
    sort(v.begin(),v.end());
    ll count = INT_MAX;
    auto it = v.begin();
    auto ans = x.begin();
    while(it!=v.end() && *it<=k){
        if(*it!=0 && k%(*it)==0 && count>(k/(*it)) ){
            count = (k/(*it));
            ans = it;
        }
        ++it;
    }
    cout<<*ans<<endl;
    return;
    
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
