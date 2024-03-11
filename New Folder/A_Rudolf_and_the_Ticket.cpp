/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 11/03/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define T  int t; cin>>t; while(t--)
int main(){
    optimize();
    T{
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];

        int cnt = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int sum = a[i]+b[j];
                if(sum<=k) cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}