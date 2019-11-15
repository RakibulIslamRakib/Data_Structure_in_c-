#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll pow(ll n,ll x){
if(x==0){
    return 1;
}
if(x%2==0){
return pow(n*n,x/2);
}
else{
    n*pow(n*n,(x-1)/2);
}
}

int main(){
cout<<pow(2,9);
}


