void solve()
{
    int n;
    cin>>n;
    vi v(n);
    cin>>v;
    int sum =0;
    for(int i = 1;i<n;i++){
    	if(v[i-1]>v[i]){
    		sum+=(v[i-1]-v[i]);
    		v[i]=v[i-1];
    	}
    }
    cout<<sum<<endl;
}
