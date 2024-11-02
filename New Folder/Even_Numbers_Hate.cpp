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
        int e=0,o=0;
        while(n--){
            int a; cin>>a;
            if(a%2==0) e++;
            else o++;
        }
        if(o>0){
            int res = 1+e+(o-1)/2;
            cout<<res<<endl;
        }
        else cout<<0<<endl;
    }

    return 0;
}