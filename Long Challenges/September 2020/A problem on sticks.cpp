//https://www.codechef.com/SEPT20B/problems/TREE2

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
    vector<int> v(n);
    for(auto &it : v){
        cin>>it;
    }
    int count = 0;
    if(*min_element(v.begin(),v.end()) != 0){
        count++;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<n-1; i++){
        if(v[i+1] == v[i]){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
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
