https://www.codechef.com/DEC20B/problems/VACCINE1

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
	int d1,d2,v1,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	if(d1 == d2){
	    cout<<(ceil((float)p/(float)(v1+v2))+d1-1)<<endl;
	    return;
	}
	int sum = 0;
	int count = 0;
	int total = p;
	int mini = min(d1,d2);
	while(sum<p){
	    if(d1>d2){
	        sum += v2;
	        total -= v2;
	        d2++;
	        count++;
	        continue;
	    }
	    else if(d1<d2){
	        sum+= v1;
	        total -= v1;
	        d1++;
	        count++;
	        continue;
	    }
	    else{
	        count += ceil((float)total/(float)(v1+v2));
	        break;
	    }
	}
	cout<<count+mini-1<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	//cin>>t;
	//while(t--)
		solve();
	return 0;
}
