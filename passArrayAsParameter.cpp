#include<bits/stdc++.h>
using namespace std;
void built(int ar[],int n){//ar[] is a array pointer here. this is call by address. so we can cng the array element throught this function

for(int i=0;i<n;i++){
        cout<<ar[i]<<"  ";
}
}



int main(){
   int n=5;
   int arr[n]={1,2,3,4,5};
   built(arr,n);

}
