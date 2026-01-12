// 20 * 19 * 18 * 17 * 16 * 15 * 14 * 13 * 12 * 11 * 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum = 0;
	for(long long i = 5;i<=n;i*=5){
		sum += (n/i);
	}
	cout<<sum<<endl;
}
