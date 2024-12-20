#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


void solve(){
    int n;
    cin >> n;
    int a[n];
    int s = -1, l = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>0){
            if(s==-1){
                s = i;
            }
            l = i;
        }
    }

    if(s==-1)
        cout << 0 << endl;
    else{
        for (int i = s; i <=l; i++){
            if(a[i]==0){
                cout << 2 << endl;
                return;
            }
        }
        cout << 1 << endl;
    }
    
}

int main(){
    optimize();

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}