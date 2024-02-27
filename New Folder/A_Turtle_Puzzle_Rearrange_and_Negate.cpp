/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 27/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll sum = 0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            sum +=abs(a);
        }

        cout<<sum<<endl;
    }

    return 0;
}