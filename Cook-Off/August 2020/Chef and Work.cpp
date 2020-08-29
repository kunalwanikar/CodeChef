//https://www.codechef.com/COOK121B/problems/CHEFNWRK/
#include<bits/stdc++.h>


using namespace std;


void solve(){
	long long n,k;
	cin>>n>>k;
	vector<long long> v(n);
	for(auto &it : v){
		cin>>it;
	}
	if(k<(*max_element(v.begin(),v.end()))){
		cout<<"-1"<<endl;
		return;
	}
	auto it = v.begin();
	long long sum = 0,count = 1;
	while(it!=v.end()-1){
		sum+=*it;
		if(sum+*(it+1)>k){
			count++;
			sum = 0;
		}
		++it;
	}
	cout<<count<<endl;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
