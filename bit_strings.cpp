#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int main(){
	int n;
	cin>>n;
	long long product = 1;
	for(int i = 0;i<n;i++){
		product = (product%mod * 2%mod)%mod;
	}
	cout<<product<<endl;
}
