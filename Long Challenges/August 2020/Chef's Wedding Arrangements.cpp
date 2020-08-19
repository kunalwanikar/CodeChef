#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int value;
    for(int i=0; i<n; i++){
        cin>>value;
        v.push_back(value);
    }
    int f[101] = {0};
    int count = 1;
    for(int i=0; i<n; i++){
        if(f[v[i]]==0){
            f[v[i]] = 1;
        }
        else{
            count++;
            for(int j=0; j<101; j++){
                f[j] = 0;
            }
            f[v[i]] = 1;
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
