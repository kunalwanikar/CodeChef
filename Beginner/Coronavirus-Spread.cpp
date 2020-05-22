//https://www.codechef.com/problems/COVID19

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int t=0; t<T; t++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] >arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	    int min=n,max=0,l = 0;
	    
	    for (int i = 0; i < n; ++i) {
        if (i && arr[i] - arr[i - 1] > 2) l = i;
        if (i + 1 == n || arr[i + 1] - arr[i] > 2) {
            int cur = i - l + 1;
            if (cur < min)
                min = cur;
            if (cur > max)
                max = cur;
        }
    }
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
