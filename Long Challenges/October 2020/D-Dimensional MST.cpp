//https://www.codechef.com/OCT20B/problems/DDIMMST

//Implemented Prims algo with priority queue. 
//This will fetch only 10 points.
//For 100 points try prims algo with fibonacci heap.

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	int d;
	cin>>n>>d;
	int arr[n][n];
	int weight = 0;
	int p[n];
	int k[n];
	bool flag[n];
	
	for(int i=0; i<n; i++){
	    arr[i][i] = 0;
	}
	ll brr[n][d];
	for(int i=0; i<n; i++){
	    for(int j=0; j<d; j++){
	        cin>>brr[i][j];
	    }
	}
	ll w = 0;
	for(int i=0; i<n; i++){
	    for(int j=i; j<n; j++){
	        w = 0;
	        for(int f=0; f<d; f++){
	            w += abs(brr[i][f] - brr[j][f]);
	        }  
	        arr[i][j] = -w;
	        arr[j][i] = -w;
	    }
	}
	
	
	
	for(int i=0; i<n; i++){
	    k[i] = INT_MAX;
	    flag[i] = false;
	}
	k[0] = 0;
	p[0] = -1;
	
	for(int f=0; f<n-1; f++){
	    
	    int u;
	    int max = INT_MAX, maxind; 
 
        for (int x = 0; x < n; x++){
            if(x == 0){
                max = INT_MAX;
            }
            if(flag[x] == false && k[x]<max){
                max = k[x];
                maxind = x;
            }
        }
        u = maxind;
        int cno;
        flag[u] = true;
        for(int v=0; v<n; v++){
            if(arr[u][v]!=0 && flag[v] == false && arr[u][v] < k[v]){
                cno = 1;
            }
            
            switch(cno){
                case 1 : {p[v] = u;
                        k[v] = arr[u][v];
                        cno = 0;
                        break;
                }
                default : break;
            }
        }
        
	}
	for(int i=1; i<n; i++){
	    weight += arr[i][p[i]];
	}
	
	cout<<weight*(-1)<<endl;
	return 0;
}
