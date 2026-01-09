void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<=1e6;i++){
    	cout<<n<<" ";
    	if(n==1) break;
    	if(n&1) n=(n*3)+1;
    	else n/=2;
    }
}
