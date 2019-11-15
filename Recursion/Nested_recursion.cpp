#include<bits/stdc++.h>
using namespace std;

int funA(int n){
if(n>100){
    return n-10;
}
else{
        cout<<n<<" ";
    funA(funA(n+11));
}
}

int main(){
funA(95);
}
