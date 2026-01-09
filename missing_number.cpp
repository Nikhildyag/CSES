void solve()
{
    int n;
    cin>>n;
    vi v(n);
    cin>>v;
    ump m;
    for(auto i:v) m[i]++;
    for(int i=1;i<=n;i++){
    	if(m[i]==0){
    	 cout<<i<<endl;
    	 break;
    	}
	}
}
