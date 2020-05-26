#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int rep[10000]={0};
    int count = 1;
    for(int i=0; i<n; i++){
        
        if(arr[i]==arr[i+1]){
            count++;
            continue;
        }
        else{
            if(rep[arr[i]-1]==0){
                rep[arr[i]-1] = count; 
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
            count = 1;
        }
        
    }
    int max = *max_element(arr,arr+n);
    for(int i=0; i<=max; i++){
        for(int j=i+1; j<=max; j++){
            if(rep[i]>0 && rep[j]>0 && rep[i]==rep[j]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
