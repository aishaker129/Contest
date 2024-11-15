#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int main(){
    optimize();

    int t; cin>>t;
    while(t--){
       int n; cin>>n;
       int a[n];
       for(int i=1; i<=n; i++) cin>>a[i];
       bool f = true;
       for(int i=1; i<=n; i++){
        if(a[i]==i or a[i]==i+1 or a[i]==i-1) continue;
        else{
            f = false;
            break;
        }
       }
       if(f) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    return 0;
}