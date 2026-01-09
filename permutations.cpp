#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==2 or n==3){
	 cout<<"NO SOLUTION"<<endl;
	 return 0;
	}
	else if(n==4){
		cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
		return 0;
	}
	int mid = ((n+1)/2) + 1;
	int temp = mid;
	for(int i = 1;i < mid;i++){
		cout<<i<<" ";
		if(n&1 && i == (mid-1)) continue;
		cout<<temp<<" ";
		temp++;
	}
}
