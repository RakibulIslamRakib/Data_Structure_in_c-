//if a function call itself more than one time. then it is called tree recursion

#include<bits/stdc++.h>
using namespace std;
void fun(int n){
if(n>0){
    cout<<n<<" ";
    fun(n-1);//ei call e each values er jonno next func o call korbe.//3,2,1,1
    fun(n-1);//ei call e each values er jonno previous func o call korbe.//2,1,1

}
}
int main(){
    fun(3);
}


