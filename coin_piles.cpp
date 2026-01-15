#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		if( (2*l-r) < 0 || (2*l-r)%3 || (2*r-l) < 0  || (2*r-l)%3 ) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
			
	}
}

/**
	a = x + 2y   x = a - 2y         y = b-2x
	b = y + 2x   b = y + 2(a-2y)	a = x + 2(b-2x)
				 b = y + 2a -4y		a = x + 2b - 4x
				 b = 2a-3y			a = 2b - 3x
				 y = (2a-b)/3		x = (2b-a)/3

	2a-b > 0 && 2b-a >0 && 2a-b should be divisible by 3 && 2b-a should be divisible by 3
*/
