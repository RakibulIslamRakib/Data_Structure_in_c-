#include<bits/stdc++.h>
using namespace std;
struct rectengle{
int length,weight;
};

int area( struct rectengle &r1){// this is call by reference. so we can
    // cng the array element throught this function.
    //cos we know that when we use the reference as parameter of a method,
    //the byte code is pested in side the main method
    //so it can change the actual parameter
return r1.length*r1.weight;
}

int main(){
    struct rectengle r{12,53};
  cout<<area(r)<<endl;
}
