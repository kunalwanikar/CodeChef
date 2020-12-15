//https://www.codechef.com/DEC20B/problems/EVENPSUM

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
    long long int a,b;
    cin>>a>>b;
    long long sum,total;
    if(a==1 || b==1){
        cout<<(ceil((long double)a/2)*ceil((long double)b/2))<<endl;
        return;
    }
    /*if(a%2 == 1 && b%2 == 1){
        sum = (ceil((long double)a/2)*floor((long double)b/2));
        total = (floor((long double)a/2)*floor((long double)b/2));
        cout<<sum+total<<endl;
        return;
    }*/
	sum = (ceil((long double)a/2)*ceil((long double)b/2));
	total = (floor((long double)a/2)*floor((long double)b/2));
    cout<<sum + total<<endl;
    
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
