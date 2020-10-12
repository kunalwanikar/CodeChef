//https://www.codechef.com/OCT20B/problems/REPLESX

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    vector<ll> v(n);
    for(auto &it : v){
        cin>>it;
    }
    ll count = 0;
    sort(v.begin(), v.end());
    if(v[p-1] == x){
        cout<<"0"<<endl;
        return;
    }
    if((p>k) && (x<v[p-1])){
        cout<<"-1"<<endl;
        return;
    }
    if((p<k) && (x > v[p-1])){
        cout<<"-1"<<endl;
        return;
    }
    bool flag = 0;
    if(x<v[p-1]){
        for(int i=0; i<=p-1; i++){
            if(v[i]>x){
                count++;
            }
            
        }
        cout<<count<<endl;
        return;
    }
    if(x>v[p-1]){
        for(int i=p-1; i<n; i++){
            if(v[i]<x){
                count++;
            }
        }
        cout<<count<<endl;
        return;
    }
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
