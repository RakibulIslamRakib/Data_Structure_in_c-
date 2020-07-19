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
