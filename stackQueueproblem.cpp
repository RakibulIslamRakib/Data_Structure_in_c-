#include<bits/stdc++.h>
using namespace std;
int arr[1000];
stack<char>st;
queue<char>q;

int main(){
    string s;int cnt=0,sizeog_string;
    cin>>s;
    sizeog_string=s.size();
    for(int i=0;i<sizeog_string;i++){
        st.push(s[i]);
        q.push(s[i]);
    }
    for(int i=0;i<sizeog_string;i++){
        if(st.top()==q.front()){
            st.pop();q.pop();
        }
        else{
            cnt++;break;
        }
    }
    if(!cnt)cout<<"The word, "<<s<<", is a palindrome."<<endl;
    else cout<<"The word, "<<s<<", is not a palindrome."<<endl;

}
