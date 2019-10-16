#include<bits/stdc++.h>
using namespace std;
int main(){
struct {
int rol;
string name;
int reg;
}student[100];
for(int i=0;i<3;i++){
cin>>student[i].rol;
cin>>student[i].name;
cin>>student[i].reg;
}
for(int i=0;i<3;i++){
cout<<student[i].name<<" "<<student[i].rol<<" "<<student[i].reg;
cout<<endl;
}

}
