//https://www.codechef.com/problems/TLG

#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
	int n;
	cin>>n;
	int value1,value2;
	vector<int> v1;
	vector<int> v2;
	for(int i=0; i<n; i++){
	    cin>>value1;
	    v1.push_back(value1);
	    cin>>value2;
	    v2.push_back(value2);
	}
	vector<int>::iterator it1 = v1.begin();
	vector<int>::iterator it2 = v2.begin();
	int sum1 = 0,sum2 = 0,lead = 0,p;
	if(*it1>*it2){
	    lead = *it1 - *it2;
	    p=1;
	}
	else {
	    lead = *it2 - *it1;
	    p=2;
	}
	while(it1 != v1.end() || it2 != v2.end()){
	    sum1 = accumulate(v1.begin(),it1+1,0);
	    sum2 = accumulate(v2.begin(),it2+1,0);
	    if(sum1 > sum2){
	        if(sum1 - sum2 > lead){
	            lead = sum1 - sum2;
	            p=1;
	        }
	    }
	    else {
	        if(sum2 - sum1 > lead){
	            lead = sum2 - sum1;
	            p = 2;
	        }
	    }
	    ++it1;
	    ++it2;
	}
	cout<<p<<" "<<lead;
	return 0;
}
