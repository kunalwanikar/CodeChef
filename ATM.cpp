//https://www.codechef.com/problems/HS08TEST

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


//PROBLEM STATEMENT
//Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5,
//and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
//For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.
