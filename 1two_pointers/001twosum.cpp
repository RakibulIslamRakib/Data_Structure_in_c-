void solve() {
   int n;cin>>n;
   ll l=0,r=n-1,x;
   ll a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
    cin>>x;
    bool got=true;
    while(l<r){
        if(a[l]+a[r]==x){cout<<a[l]<<" "<<a[r]<<" = "<<x<<endl;got=false;break;}
        if(a[l]+a[r]>x)r--;
        if(a[l]+a[r]<x)l++;
    }
    if(got)cout<<" -1 "<<" -1 "<<endl;
}
