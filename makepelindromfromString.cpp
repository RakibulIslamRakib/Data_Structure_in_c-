#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
int c[26] = {};
string s;
cin>>s;
for(char x:s){
    ++c[x-'A'];
}
int numodd=0,index;
char mid;
for(int i=0;i<26;i++){
    if(c[i]%2) {
        ++numodd;
        mid = char(i+'A');
        index = i;
    }
}
if(numodd>1){
    cout<<"NO SOLUTION"<<endl;
    return 0;
}
vector<int>p;
for(int i=0;i<26;i++){
    p.push_back(c[i]/2);
}
string ps="";
for(int i=0;i<p.size();i++){
    if(p[i]==0)continue;
    while(p[i]--){
        ps+=char(i+'A');
    }
}
cout<<ps;
if(numodd==1)cout<<mid;
reverse(ps.begin(),ps.end());
cout<<ps<<endl;


}


