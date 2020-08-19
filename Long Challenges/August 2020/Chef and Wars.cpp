#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    ll h,p;
    cin>>h>>p;
    while(p){
        h-=p;
        p/=2;
    }
    if(h>0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
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
