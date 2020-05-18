#include<bits/stdc++.h>
using namespace std;
main()
{
queue<int>q;
for(int i=0;i<10;i++){
    int x;cin>>x;
    q.push(x);
}
for(int i=0;i<10;i++){
    cout<<"front : "<<q.front()<<endl;
    cout<<"back : "<<q.back()<<endl;
    cout<<"size : "<<q.size()<<endl;
    q.pop();

}
    cout<<"front : "<<q.front()<<endl;
    cout<<"back : "<<q.back()<<endl;
    cout<<"size : "<<q.size()<<endl;
    q.pop();
}
