#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<0<<endl;
	for(int i = 2;i<=n;i++){
		long long numberOfSquares = i*i;
		long long numberOfpossibilities = (numberOfSquares*(numberOfSquares-1))/2;
		long long numberOfRemovals = 4 * (i-1) * (i-2);
		cout<<numberOfpossibilities-numberOfRemovals<<endl;
	}
}
