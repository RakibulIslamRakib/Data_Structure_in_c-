#include <bits/stdc++.h>
using namespace std;
map<string,string>mp;
vector<string>v;
map<string,string>::iterator it;
bool isvalid(string email){
    int len = email.size(),indx=0;
    bool valid = true;
    string s="@gmail.com";
    for(int i=len-10;i<len;i++){
        if(email[i]!=s[indx++]){
            valid = false;
        }
    }
    return valid;
}
int main() {
  int n;cin>>n;
  string name,email;
  for(int i=0;i<n;i++){
    cin>>name>>email;
    if(isvalid(email)){
        mp[email]=name;
    }
  }
 for(it = mp.begin();it!=mp.end();it++){
    v.push_back(it->second);
 }
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }
}
