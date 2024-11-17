#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int k; cin>>k;
    int a[k];
    for(int i=0; i<k; i++) cin>>a[i];

    int n = sqrt(k);
    int m = k/n;
    cout<<n<<" "<<m<<endl;
}

int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

