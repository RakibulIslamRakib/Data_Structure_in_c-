#include<bits/stdc++.h>
using namespace std;

void swp(int &a,int &b){
int temp=b;
b=a;
a=temp;
}

int main(){
int a=10,b=15;
//here we use reference to call the swp function.
s//o the machine code of swp will be pest here into the main function.
//so now it is like monoletic program 
swp(a,b);//a,b cng here. This is called call by reference. it cng actual value of actual parameters because the reference is the another name of the actual parameter
cout<<a<<b<<endl;//a=15;b=10

}
