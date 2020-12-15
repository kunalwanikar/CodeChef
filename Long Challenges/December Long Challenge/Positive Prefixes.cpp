//https://www.codechef.com/DEC20B/problems/POSPREFS

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
	int n,k;
	cin>>n>>k;
	int v[n];
	if(k==0){
	    for(int i=0; i<n; i++){
	        cout<<-i-1<<" ";
	    }
	    return;
	}
	for(int i=0; i<n; i++){
	    v[i] = i+1;
	}
	for(int i=0; i<n; i+=2){
	    v[i] *= -1;
	}
	
	if(k==n/2){
	    for(int i=0; i<n; i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    return;
	}
	int count = 1;
	if(k<n/2){
	    int i=n-1;
	    while(count<=n/2-k && i>0){
	        if(v[i]>0){
	            v[i]*=-1;
	            count++;
	        }
	        i--;
	    }
	    for(int i=0; i<n; i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    return;
	}
	int pospre = n/2;
	if(k>n/2){
	    int i=n-1;
	    while(pospre!=k && i>=0){
	        if(v[i]<0){
	            v[i]*=-1;
	            pospre++;
	        }
	        i--;
	    }
	    for(int i=0; i<n; i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    return;
	}
	
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
