#include<bits/stdc++.h>
#include <cmath>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;
// bool is_power(int n,int k){
//     if(n<=0){
//         return false;
//     }
//     while(n%k==0){
//         n /=k;
//     }

//     return true;
// }
void solve(){
    int k, a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    int cnt = 0;
    vector<pair<int, int>> v;
    for (int i = a; i <= b; i++)
    {
        for (int j = c; j <= d; j++){
            double div = j / i;
            int mn = div;
            double l = 0;
            if (div - mn == 0)
            {
                l = log(div) / log(k);
            }

            int m = l;
            if(m-l==0){
                v.push_back({i, j});
            }
        }
    }
    for(auto u:v){
        cout << u.first<<" "<<u.second << endl;
    }
}

int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}