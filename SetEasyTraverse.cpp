//set1==set2: will return true if both contains same element and shorted

#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    int n,k,cnt=0;
    set<int>sk;
    cin>>n>>k;
    for(int i=0;i<=k;i++){
        sk.insert(i);
    }
    while(n--){
        set<int>ts;
        ll x;cin>>x;
        while(x){
            int digit = x%10;
            x=x/10;
             ts.insert(digit);
        }
        int present=0;
        for(int p:sk){
            for(int q:ts){
                if(p==q)present++;
                if(present==sk.size())break;
            }
        }
        if(present==sk.size()){
                cnt++;
        }

    }
    cout<<cnt<<endl;
}
