//https://www.codechef.com/problems/CIELAB

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int d;
	if(a>b){
	    d=a-b;
	}
	else{
	    d = b-a;
	}
	if(d!=1){
	    if(d%10 == 0){
	        d++;
	    }
    	else{
	        d--;
	    }
	}
	else{
	    d++;
	}
	
	cout<<d<<endl;
	return 0;
}
