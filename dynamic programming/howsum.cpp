int cans[10005];
vector<int>v;

bool cansum(int n,int m,int a[]){
    if(m==0)return true;
    if(m<0)return false;
    if(cans[m]==1)return true;
    if(cans[m]==-1)return false;
    for(int i=0;i<n;i++){
        if(cansum(n,m-a[i],a)){
            cans[m]=1;
            v.push_back(a[i]);
            return true;
        }
        else cans[m]=-1;
    }
    return false;
}


void solve() {
   int n,m;cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   if(cansum(n,m,a)){
    cout<<"YES "<<v.size()<<endl;
    for(int x:v)cout<<x<<endl;
   }
   else cout<<"NO"<<endl;
   //cout<<cansum(n,m,a)? "YES":"NO";<<endl;
}

int main() {
    int t=1;
    while(t--){
        solve();
    }
}