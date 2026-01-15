#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	unordered_map<char,int> m;
	for(auto i : s){
		m[i]++;
	}
	//handles the case where the single odd multiple of charecter is present and more than 1 are present
	//then it will return no solution
	bool isOddOne = false;
	for(auto i : m){
		if(i.second&1){
			if(isOddOne){
				cout<<"NO SOLUTION"<<endl;
				return 0;
			}
			isOddOne = true;
		}
	}
	//adds the first half of the solution string to res
	//adds the middle element only if the size of the string is odd
	//adds the remaining elements in to the res
	string sol = "";
	string res = "";
	char oddChar;
	for(auto i : m){\
		if(i.second&1) oddChar = i.first;
		string temp(i.second/2,i.first);
		sol+=temp;
		res+=temp;
	}
	if(s.size()&1) res+=oddChar;
	reverse(sol.begin(),sol.end());
	res+=sol;
	cout<<res;
}
