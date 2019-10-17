//to change the actual value of the parameters with a function,
//we have to pass the address of that parameters to the function.
//bt only pointer can access the address.so the fucntion parameters
//have to be the pointers.


#include<bits/stdc++.h>
using namespace std;

void swp(int *a,int *b){
int temp=*b;
*b=*a;*a=temp;
}

int main(){
int a=10,b=15;
swp(&a,&b);//a,b doesn't cng here. This is called pass by values. it doesnot cng actual value of ctual parameters
cout<<a<<b<<endl;//a=10;b=a5

}
