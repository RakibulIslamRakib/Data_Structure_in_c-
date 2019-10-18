//call by values

#include<bits/stdc++.h>
using namespace std;
struct rectengle{
int length,weight;
};

int area( struct rectengle r1){// this is call by value. so we cant cng the array element throught this function
return r1.length*r1.weight;
}

int main(){
    struct rectengle r{12,53};
  cout<<area(r)<<endl;
}
