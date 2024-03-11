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
        int n; cin>>n;
        string s;
        cin>>s;
        
        int count = 0;
        for(int i=0; i<n; i++){
            if((s[i]=='p' && s[i+1]=='i'&& s[i+2]=='e')||(s[i]=='m' && s[i+1]=='a'&& s[i+2]=='p')){
                count++;
                i +=2;
            }
        }
        
        cout<<count<<endl;
    }

    return 0;
}