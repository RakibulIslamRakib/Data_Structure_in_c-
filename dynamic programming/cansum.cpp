
int cans[10005];

bool cansum(int n,int m,int a[]){
    if(m==0)return true;
    if(m<0)return false;
    if(cans[m]==1)return true;
    if(cans[m]==-1)return false;
    for(int i=0;i<n;i++){
        if(cansum(n,m-a[i],a)){
            cans[m]=1;
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
   string s = cansum(n,m,a)? "YES":"NO";
   cout<<s<<endl;
   //cout<<cansum(n,m,a)? "YES":"NO";<<endl;
}

int main() {
    int t=1;
    while(t--){
        solve();
    }
}