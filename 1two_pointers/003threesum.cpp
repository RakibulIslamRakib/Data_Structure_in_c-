
void solve() {
   int n;cin>>n;
   ll l,r=n-1,x,target,fst=0;
   ll a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
    cin>>target;
    bool got=true;
    while(fst<n && got){
            l=fst+1;
            x=target-a[fst];
    while(l<r){
        if(a[l]+a[r]==x){cout<<a[fst]<<" "<<a[l]<<" "<<a[r]<<" = "<<target<<endl;got=false;break;}
        if(a[l]+a[r]>x)r--;
        if(a[l]+a[r]<x)l++;
    }
    fst++;
}
    if(got)cout<<" -1 "<<" -1 "<<endl;
}
