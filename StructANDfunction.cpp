#include<bits/stdc++.h>
using namespace std;
struct rectengle{
int lenth,breath;
};

void initiate(struct rectengle *r,int len,int brt){
r->lenth=len;
r->breath=brt;
}

int area( struct rectengle r1){
    return r1.lenth*r1.breath;
}

void changeLenth(struct rectengle *r1,int newlenth){
r1->lenth=newlenth;
}

int main(){
    struct rectengle r;
    initiate(&r,5,8);
    cout<<area(r)<<endl;
    changeLenth(&r,12);
    cout<<area(r)<<endl;
}
