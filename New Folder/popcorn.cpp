#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();

    int x,y,z;
    cin>>x>>y>>z;
    int sum = x+y;
    int result  = z;
    if(sum > result){
        cout<<2*result+y<<endl;
    }else{
        int p = 2 * x;
        int d = 3*y;
        cout<<p+d<<endl;
    }

    return 0;
}