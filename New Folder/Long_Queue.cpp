#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int x = a[n-1];
        bool f = true;
        int i=n-2;
        int s = x/2;
        while(f){
            if(s>=a[i]) i--;
            else f = false;
        }
        if(f) cout<<1<<endl;
        else cout<<i+2<<endl;
    }
    

    return 0;
}