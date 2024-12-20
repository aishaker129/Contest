#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve(){
    string s,ans="";
    cin >> s;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if(s[i]=='p'){
            ans += 'q';
        }
        else if(s[i]=='q'){
            ans += 'p';
        }
        else {
            ans += 'w';
        }
    }

        cout << ans << endl;
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