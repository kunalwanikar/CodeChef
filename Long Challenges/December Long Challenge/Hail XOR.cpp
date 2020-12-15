//https://www.codechef.com/DEC20B/problems/HXOR

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
	ll n,x;
	cin>>n>>x;
	vector<ll> v(n);
	for(auto &it : v){
	    cin>>it;
	}
	ll k=1;
	ll i=0;  
	bool bit=true;
	while(k<=x&&bit&&i<n-1)   
	{  
	  
	  while(v[i]!=0&&k<=x&&i<n-1)
	  {
	     ll t;
	     ll num;
	     ll j=i+1;
	     num = (ll)(log(v[i])/log(2));
	     num = (ll)pow(2, num); 
	     v[i]= v[i]^num;
	     
	     
	     /*if(t>v[j]&&j<n-1&&j++){
	         t=v[j]^p;
	         
	     }*/
	     do{
	        t=v[j]^num;
	     }while(t>v[j] && j<n-1 && j++);
	       
	     
	       v[j]^=num;
	     k++;
	  }
	    if(v[i]){
	        bit=false;
	    }
	    i++;
	  }
	   k--; 
	   if(k<=x-1)
	   {
	       
	       if((x-k)%2 == 1)
	       {
	           if(n<3){
	           v[n-1]^=1;
	           v[n-2]^=1;
	           }
	       }
	   }
	   
	   for(auto it : v){
	       cout<<it<<" ";
	   }
	   cout<<endl;
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
