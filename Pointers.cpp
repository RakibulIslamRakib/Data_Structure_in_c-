#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,cnt=0;
int *p;
cin>>n;
p=&n;
cout<<p<<"  ";//print the address of n in stack section of memory;
cout<<*p;//print the data pointing by the pointer variable p;
//generally pointer can access memory in segment section
//to access heap memory, maloc function needed
int *pntr1,*pntr2;
pntr1=(int *)malloc(5*sizeof(int));//in c//it will take an array of int with size 5;and pointer will hold the address of the first element of array. thus we can access the hole array of heap memory
pntr2=new int[5];//same in c++
cout<<pntr1<<" "<<pntr2;
}

