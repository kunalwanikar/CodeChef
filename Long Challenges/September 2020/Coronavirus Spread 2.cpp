//WARNING : This code gives wrong answer
//https://www.codechef.com/SEPT20B/problems/COVID19B

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    int n;
    cin>>n;
    int val;
    vector<pair<int,int> > v;
    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back({i,val});
    }
    bool inf[n];
    for(int i=0; i<n; i++){
        inf[i] = 0;
    }
    int max = 1;
    int fir,sec;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n ;j++){
            if(inf[j] == 0 && v[i].second<v[j].second){
                sec = v[j].second - v[i].second;
                fir = v[i].first - v[j].first;
                if(fir/sec > 0){
                    max++;
                    inf[j] = 1;
                }
            }
            else if(inf[j]==0 && v[i].second>v[j].second){
                sec = v[i].second - v[j].second;
                fir = v[j].first - v[i].first;
                if(fir/sec > 0){
                    max++;
                    inf[j] = 1;
                }
            }
            else{
                if(inf[j]==0 && v[i].first==v[j].first){
                    max++;
                    inf[j] = 1;
                }
            }
        }
    }
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        inf[i] = 0;
    }
    ll sum[n];
    int count = 1;
    for(ll t=1; t<999; t++){
        for(ll i=0; i<n; i++){
            sum[i] = v[i].first + v[i].second*t;
        }
        for(int i=0; i<n; i++){
            inf[i] = 1;
            for(int j=i; j<n; j++){
                if(inf[j]==0 && sum[i] == sum[j]){
                    count++;
                    inf[j]=1;
                }
            }
            if(min>count){
                min = count;
            }
            inf[i]=0;
        }
        
    }
    cout<<min<<" "<<max<<endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}


