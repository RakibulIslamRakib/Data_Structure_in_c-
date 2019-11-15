#include<bits/stdc++.h>
using namespace std;
void fun(int n){
if(n>0){
    //can not perform anything before  returning.
    fun(n-1);//tail recursion. cos function call itself before finishing any functional work
    cout<<n<<" ";//output 1,2,3,4,5. execute returning time
}
}
//head recursion equivalent function using loop
//we cannot convert head recursion using loop as it is. we need to change them.
void fun2(int n){
int i=1;
while(i<=n){
    cout<<n<<" ";
    n--;
}
}
int main(){
    fun(5);
    fun2(5);
}

