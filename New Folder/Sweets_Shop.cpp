#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int x,y;
    cin>>x>>y;
    int r = x-(10*y);
    int ans = r/20;
    cout<<ans<<endl;

    return 0;
}