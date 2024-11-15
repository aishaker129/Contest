#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int,int> m;
    for(auto u:a){
        m[u]++;
    }
    int common = 0;
    for(auto u:m){
        if(common<u.second){
            common = u.second;
        }
    }
    if(common==1){
        cout<<n-1<<endl;
    }
    else{
        cout<<n-common<<endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}