#include <iostream>
#include<limits>
#include<cmath>
using namespace std;

int main() {
	int n;
	float m;
	cin>>n>>m;
	if(n<=2000 && n>0 && m<=2000 && m>=0){
	if((n%5==0) && (m > (n+0.5))){
	    cout.precision(2);
	    cout<<fixed<<m-n-0.5;
	}
	else{
	    cout.precision(2);
	    cout<<fixed<<m;
	}
	}
	return 0;
}
