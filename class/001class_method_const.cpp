#include<bits/stdc++.h>
using namespace std;

class Student{
private:
    int age,standard;
    string first_name,last_name;
public:
    void set_age(int x){
        age=x;
    }

    void set_standard(int x){
        standard=x;
    }


    void set_first_name(string x){
        first_name=x;
    }
    void set_last_name(string x){
        last_name=x;
    }

    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }

};


int main(){
    //create constructor for Student class
    Student ss;
    int age,standard;
    string first_name,last_name;
    cin>>age>>first_name>>last_name>>standard;
    ss.set_age(age);
    ss.set_first_name(first_name);
    ss.set_last_name(last_name);
    ss.set_standard(standard);
    cout<<ss.get_age()<<endl;
    cout<<ss.get_last_name()<<", "<<ss.get_first_name()<<endl;
    cout<<ss.get_standard()<<endl;
    cout<<"\n"<<ss.get_age()<<","<<ss.get_first_name()<<","<<ss.get_last_name()<<","<<ss.get_standard()<<endl;

}
