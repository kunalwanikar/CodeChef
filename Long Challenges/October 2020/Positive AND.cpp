//https://www.codechef.com/OCT20B/problems/POSAND

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
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    if((n&(n-1)) == 0){
        cout<<"-1"<<endl;
        return;
    }
    int num;
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    for(int i=4; i<=n; i++){
        if((i&(i-1)) == 0){
            num = i;
            v.push_back(i+1);
            v.push_back(i);
            i++;
            continue;
        }
        v.push_back(i);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
