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
        int b[n-1];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n-1; i++){
            int s = abs(a[i]-a[i+1]);
            b[i] = s;
        }
        
        bool f = true;
        for(int i=0; i<n-1; i++){
            if(b[i] !=5){
                if(b[i] !=7){
                    f = false;
                    break;
                }
            }
        }

        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}