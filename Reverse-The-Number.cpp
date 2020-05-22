//https://www.codechef.com/problems/FLOW007

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k = 0; k<t; k++){
	    long long n,rev = 0;
	    cin>>n;
	    while(n){
	        rev = rev*10+n%10;
	        n/=10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}


//PROBLEM STATEMENT
//If an Integer N, write a program to reverse the given number.

//INPUT
//The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

//OUTPUT
//Display the reverse of the given number N.

//EXAMPLE
//Input
//4
//12345
//31203
//2123
//2300
//Output
//54321
//30213
//3212
//32
