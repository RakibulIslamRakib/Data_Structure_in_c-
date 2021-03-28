#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    int n;cin>>n;
    map<int,int>mp;
    ll x;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    priority_queue<pair<int,int> >q;
    for(auto [x,y] :mp)q.push({y,x});
    int sz=n;
    while(q.size()>=2){
        auto [cnt1,x1] = q.top();q.pop();
        auto [cnt2,x2] = q.top();q.pop();
        sz-=2;cnt1--;cnt2--;
        if(cnt1)q.push({cnt1,x1});
        if(cnt2)q.push({cnt2,x2});
    }
    cout<<sz<<endl;
    }



int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }
}
