#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

int operation(int n,int k){
    int op = 0;
    while(n>0){
        int p = 0;
        while(pow(k,p+1)<=n) p++;

        n -= pow(k,p);
        op++;
    }

    return op;
}

int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int op =0;
        cout<<operation(n,k)<<endl;
    }

    return 0;
}