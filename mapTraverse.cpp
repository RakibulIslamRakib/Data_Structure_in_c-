#include<bits/stdc++.h>
using namespace std;
map<string,long>mp;
int main(){
    int n;
    cin>>n;
    string name;long number;
    while(n--){
        cin>>name>>number;
        mp[name]=number;
    }
    string num;
    while(cin>>num){
        if(mp.find(num)!=mp.end()){
            cout<<num<<"="<<mp.find(num)->second<<endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
}
