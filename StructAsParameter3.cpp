#include<bits/stdc++.h>
using namespace std;
struct rectengle{
int length,weight;
};

void cnglenth( struct rectengle *r1,int newlent){// this is call by address. so we can
    // cng the array element throught this function.
    //we have to pass the address as parameter of functiom=>&r;
    //and to access that address we need pointer *r1 in the function
r1->length=newlent;
}

int main(){
    struct rectengle r{12,53};
    int newlenth=20;
    cnglenth(&r,newlenth);
    cout<<r.length<<endl;
}
