//https://www.codechef.com/COOK121B/problems/POLYREL
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<ll,ll> > v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    if(n<=5){
        cout<<n<<endl;
        return;
    }
    ll sum = n,num = n;
    while(num>5){
        sum+=num/2;
        num/=2;
    }
    cout<<sum<<endl;
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
