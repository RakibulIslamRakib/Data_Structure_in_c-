//call by values does not change the actual parameters.
//to cng the value of actual parameters, we have to use pointers

#include<bits/stdc++.h>
using namespace std;

void swp(int a,int b){
int temp=b;
b=a;a=temp;
}

int main(){
int a=10,b=15;
swp(a,b)//a,b doesn't cng here. This is called pass by values. it doesnot cng actual value of ctual parameters
cout<<a<<b<<endl;//a=10;b=a5

}
