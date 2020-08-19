#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    double c,r;
    cin>>c>>r;
    double dig1 = ceil(c/9);
    double dig2 = ceil(r/9);
    if(dig1 == dig2){
        cout<<1<<" "<<dig2<<endl;
    }
    else if(dig1<dig2){
        cout<<0<<" "<<dig1<<endl;
    }
    else{
        cout<<1<<" "<<dig2<<endl;
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
