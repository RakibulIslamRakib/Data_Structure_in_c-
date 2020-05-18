#include<bits/stdc++.h>
using namespace std;
main()
{
stack<int>s;
for(int i=0;i<10;i++){
    int x;cin>>x;
    s.push(x);
}
for(int i=0;i<10;i++){
    cout<<s.top()<<" ";
    cout<<"size : "<<s.size()<<endl;
    s.pop();

}
cout<<s.top()<<" ";
    cout<<"size : "<<s.size()<<endl;
    s.pop();
}
