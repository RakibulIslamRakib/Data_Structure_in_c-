#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    vector<string>v;
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   do{
    v.push_back(s);
   }while(next_permutation(s.begin(),s.end()));
   cout<<v.size()<<endl;
   for(string s:v)cout<<s<<endl;
}



