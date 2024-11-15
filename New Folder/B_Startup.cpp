#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>b(k,0);
    for(int i=0; i<k; i++){
        int x,y;
        cin>>x>>y;
        b[x-1] +=y;
    }
    sort(b.rbegin(),b.rend());
    ll sum = 0;
    for(int i=0; i<min(n,k); i++){
        sum +=b[i];
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