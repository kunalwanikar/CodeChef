//https://www.codechef.com/problems/HORSES

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int value;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>value;
        v.push_back(value);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator it = v.begin();
    int min = *(v.end()-1);
    while(it!=v.end()-1){
        if(min > *(it+1) - *it){
            min = *(it+1) - *it;
        }
        ++it;
    }
    cout<<min<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
