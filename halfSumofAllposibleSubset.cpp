#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    int n;
    vector<ll>v;
    ll sum=0,x,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
        sum+=x;
    }
    for(int i=0;i<int(pow(2,n));i++){
        ll hs=0;
        for(int j=0;j<n;j++){
        if((i&(1<<j))!=0){
            hs+=v[j];
        }
        }
        if(hs<=sum/2){
            ans=max(ans,hs);
        }
    }
    cout<<sum-2*ans<<endl;
}


