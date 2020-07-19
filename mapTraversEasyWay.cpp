#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> my_map;
    for(int i=0;i<=20000;i++){
        my_map[i]=i+20000;
    }

    for(auto val : my_map )
        cout<<val.first<<" - > "<<val.second<<endl;
        //string& value = val.second;
        //int key = val.first;
}


//ex 2:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]=i+1;
    }
    //map always be sorted according to key
   //sort(mp.begin(),mp.size());
    //for(auto val : mp )cout<<val.first<<" - > "<<val.second<<endl;
    for(auto x : mp)cout<<x.second<<" ";
    cout<<endl;
}

