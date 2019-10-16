#include<bits/stdc++.h>
using namespace std;
int main(){
int a=10;
int &rf=a;
cout<<a<<endl;//10
cout<<rf<<endl;//10
rf++;
cout<<rf<<endl;//10
cout<<a<<endl;//10
}

