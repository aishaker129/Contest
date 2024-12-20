#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int set = 0;
    if(a>m){
        set += m;
    }
    else{
        set += a;
    }

    if(b>m){
        set += m;
    }
    else{
        set += b;
    }
    int available = (2 * m) - set;
    if(available>=c){
        set += c;
    }
    else{
        set += available;
    }
    cout << set << endl;
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