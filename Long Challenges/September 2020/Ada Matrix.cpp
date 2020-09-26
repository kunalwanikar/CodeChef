//https://www.codechef.com/SEPT20B/problems/ADAMAT

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
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int count = 0;
    for(int l=n-1; l>0; l--){
        if(arr[0][l]!=l+1){
            count++;
            //transpose
            for(int i=0; i<n; i++){
                for(int j=i; j<n; j++){
                    swap(arr[i][j],arr[j][i]);
                }
            }
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
