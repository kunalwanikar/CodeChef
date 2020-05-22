//https://www.codechef.com/problems/TSORT

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	int value;
	for(int i=0; i<n; i++){
	    cin>>value;
	    v.push_back(value);
	}
	sort(v.begin(),v.end());
	vector<int>::iterator it = v.begin();
	while(it != v.end()){
	    cout<<*it<<endl;
	    ++it;
	}
	return 0;
}
