//https://www.codechef.com/problems/FCTRL

#include <iostream>
#include<bits/stdc++.h>
#define l1 long long 
using namespace std;


void solve(){
    l1 n;
    int sum=0;
    cin>>n;
    if(n<5)
        sum=0;
    else{
        int i=1;
        while(pow(5,i)<=n){
            sum+=(n/pow(5,i));
            ++i;
        }
        
    }
    cout<<sum<<endl;
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
