//https://www.codechef.com/OCT20B/problems/CVDRUN

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int num = n;
    while(num--){
        if((x+k)%n == y){
            cout<<"YES"<<endl;
            return;
        }
        else{
            x = (x+k)%n;
        }
    }
    cout<<"NO"<<endl;
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
