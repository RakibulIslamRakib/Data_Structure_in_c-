#include<bits/stdc++.h>
using namespace std;
void fun(int n){
if(n>0){
    cout<<n<<" ";
    //can not perform anything while returning.
    fun(n-1);//tail recursion. cos function call itself after finishing all functional work
}
}
//tail recurtion equivalent function using loop
void fun2(int n){

while(n>0){
    cout<<n<<" ";
    n--;
}
}
int main(){
    //when we need tail recursion then it is efficient to use loop than the tail recursion for space complexity.
    fun(5);
    fun2(5);
}
