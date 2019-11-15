#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fact(ll n){
if(n==0){
    return 1;
}
else{
return fact(n-1)*n;
}
}

int main(){
cout<<fact(7);
}

