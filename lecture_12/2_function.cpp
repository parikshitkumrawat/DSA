#include<iostream>
using namespace std;
//no argument and no return
void greet(){
    cout<<"hello"<<endl;
}
//argument and no return
void greet(string name){
    cout<<"hello"<<" "<<name<<endl;
}
//no argument and return
int substract(){
    int a=5;
    int b=2;
    int c=a+b;
    return c;
}
//argument and return
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    greet();
    greet("parikshit");
    cout<<substract()<<endl;
    cout<<add(5,10)<<endl;
    return 0;
}