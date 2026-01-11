#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y;
		cin>>x>>y;
		if(x<=y){
			if(y&1){
				cout<<(y*y-(x-1));
			}
			else{
				cout<<((y-1)*(y-1) + x);
			}
		}
		else{
			if(x&1){
				cout<<((x-1)*(x-1) + y);
			}
			else{
				cout<<(x*x-(y-1));
			}
		}
		cout<<endl;
	}
}
