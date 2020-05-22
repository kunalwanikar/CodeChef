//https://www.codechef.com/problems/JOHNY

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int value;
    vector<int> v;
    for(int i=0; i<n ;i++){
        cin>>value;
        v.push_back(value);
    }
    int k;
    cin>>k;
    int x = *(v.begin()+k-1);
    int count = 1;
    sort(v.begin(),v.end());
    vector<int>::iterator it = v.begin();
    while(*it!=x){
        ++it;
        ++count;
    }
    cout<<count<<endl;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
