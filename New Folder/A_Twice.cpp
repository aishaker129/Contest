#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    map<int,int> m;
    int sum = 0;
    for(auto u:a) m[u]++;
    for(auto u:m){
        if(u.second>=2){
            sum +=(u.second/2);
        }
    }
    cout<<sum<<endl;
}

int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}