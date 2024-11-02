#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        vector<int> v1,v2;
        for(int i=0; i<k-1; i++){
            v1.push_back(a[i]);
        }
    }

    return 0;
}