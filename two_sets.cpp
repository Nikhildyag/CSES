#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long sum = 1LL * n * (n+1)/2;
	unordered_set<int> s1,s2;
	if(sum&1){
		cout<<"NO"<<"\n";
	}
	else{
		long long sum1 = 0;
		long long halfSum = sum/2; 
		for(int i=n;i>0;i--){
			sum1+=i;
			if(sum1>halfSum){
				sum1-=i;
				s2.insert(i);
			}
			else{
				s1.insert(i);
			}
		}
		cout<<"YES"<<"\n";
		cout<<s1.size()<<"\n";
		for(auto i:s1) cout<<i<<" ";
		cout<<"\n";
		cout<<s2.size()<<"\n";
		for(auto i:s2) cout<<i<<" ";
		cout<<"\n";
	}
}
