#include<bits/stdc++.h>
using namespace std;
int arr[1000];

void bublesort(int n){
    int totalswap=0;
for(int i=0;i<n;i++){
    int no_ofswap=0;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            no_ofswap++;
            totalswap++;
        }
    }
if(no_ofswap==0)break;
}

cout<<"Array is sorted in "<<totalswap<<" swaps."<<endl;
cout<<"First Element: "<<arr[0]<<endl;
cout<<"Last Element: "<<arr[n-1]<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bublesort(n);
}
