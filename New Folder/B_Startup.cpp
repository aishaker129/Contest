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
        vector<int> a,b;
        set<int> s;
        set<int, greater<int> > s1;
        for(int i=0; i<k; i++){
            int c,d;
            cin>>c>>d;
            a.push_back(c);
            b.push_back(d);
        }
        for(int i=0; i<k; i++){
            s.insert(a[i]);
        }
        for(auto u:s){
            int num = u;
            int pp = 0;
            for(int i=0; i<k; i++){
                if(a[i]==num){
                    pp +=b[i];
                }
            }
            s1.insert(pp);
        }
        int sum = 0;
        for(auto u:s1){
            if(n>0){
                sum +=u;
                n--;
            }
            else{
                break;
            }
        }
        

        cout<<sum<<endl;
    }

    return 0;
}