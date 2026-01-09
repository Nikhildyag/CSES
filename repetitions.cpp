void solve()
{
    string s;
    cin>>s;
    char prev = s[0];
    int currLen = 1;
    int maxi = 1;
    for(int i=1;i<s.size();i++){
    	if(s[i]==prev) currLen++;
    	else{
    		prev = s[i];
    		currLen = 1;
    	}
    	maxi = max(maxi,currLen);
    }
    cout<<maxi<<endl;
}
