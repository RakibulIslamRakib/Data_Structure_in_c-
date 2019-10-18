
#include<bits/stdc++.h>
using namespace std;
struct rectengle{
int arr[5],len_of_array;
};

void Structure_ofArray( struct rectengle r1){// this is call by values. so we can
    // the struct whice contain an array.
    //bt we cannot change the actual array element of the main function
r1.arr[0]=5;
 cout<<r1.arr[0]<<endl;
}

int main(){
    struct rectengle r{{1,2,3,4,5},5};
    Structure_ofArray(r);//print 6
    cout<<r.arr[0]<<endl;//1
}
