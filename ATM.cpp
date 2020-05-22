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



//INPUT
//Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
//Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

//OUTPUT
//Output the account balance after the attempted transaction, given as a number with two digits of precision. 
//If there is not enough money in the account to complete the transaction, output the current bank balance.

//EXAMPLE
//Input:
//30 120.00
//Output:
//89.50
