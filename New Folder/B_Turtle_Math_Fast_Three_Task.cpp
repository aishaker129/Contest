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
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum +=a[i];
        }
        int cnt =0;
        bool f = false;
        if(sum%3==0){
            cout<<0<<endl;
            continue;
        }

        for(auto u:a){
            sum -=u;
            if(sum%3==0){
                f = true;
                break;
            }
            else{
                sum +=u;
            }
        }

        while(sum%3!=0){
            sum +=1;
            cnt++;
        }

        if(f) cout<<1<<endl;
        else cout<<cnt<<endl;
    
    }

    return 0;
}