#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int m = n * 10;
	    if(m>k){
	        cout<<"NO"<<endl;
	    }
	    else{
	        int diff = k - m;
	        if(n*2<diff){
	            cout<<"NO"<<endl;
	        }
	        else{
	            cout<<"YES"<<endl;
	        }
	    }
	}

}
