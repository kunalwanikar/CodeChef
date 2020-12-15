//https://www.codechef.com/DEC20B/problems/VACCINE2

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>
#define mii map<int, int>
#define pb push_back
#define pf push_front


using namespace std;

//const ll m = 1e9+7;

void solve(){
	int n,d;
	cin>>n>>d;
	vector<int> v(n);
	for(auto &it : v){
	    cin>>it;
	}
	int c1=0,c2=0;
	for(int i=0; i<n; i++){
	    if(v[i]>=80 || v[i]<=9){
	        c2++;
	    }
	    else{
	        c1++;
	    }
	}
	cout<<ceil((float)c1/d)+ceil((float)c2/d)<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
