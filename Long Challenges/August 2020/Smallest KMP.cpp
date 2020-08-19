#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vvi vector<vector<int> >

using namespace std;

void solve(){
    string s,p;
    cin>>s>>p;
    int n = s.length();
    int m = p.length();
    string str = "";
    int arr[128] = {0};
    for(int i=0; i<n; i++){
        arr[s[i]]++;
    }
    for(int i=0; i<m; i++){
        arr[p[i]]--;
    }
    for(int i=97; i<123; i++){
        while(arr[i]--){
            str+=(char)i;
        }
    }
    if(str.length() == 0){
        cout<<p<<endl;
        return;
    }
    bool flag = false;
    for(int i=1; i<m; i++){
        if(p[i]<p[0]){
            flag = true;
            break;
        }
        else if(p[i]>p[0]){
            flag = false;
            break;
        }
    }
    int i;
    for(i=0; i<n-m; i++){
        
        if(str[i]<p[0]){
            continue;
        }
        else{
            if(flag){
                str.insert(i,p);
                break;
            }
            else{
                
                while(i+1<n-m+1 && str[i]==str[i+1]){
                    i++;
                }
                if(str[i]==p[0]){
                    str.insert(i+1,p);
                    break;
                }
                else{
                    str.insert(i,p);
                    break;
                }
                
            }
            
        }
    }
    if(i==n-m){
        str+=p;
    }
    cout<<str<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}
