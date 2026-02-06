#include<iostream>
using namespace std;
//gcd(a,b)=gcd(b,a%b);
//function
int gcd(int a,int b){
    while(b!=0){
        int t=a%b;
        a=b;
        b=t;
    }
    return a;
}
//normal
int main(){
    int a,b;
    cin>>a>>b;{
        int t=a%b;
        a=b;
        b=t;
    }
    cout<<a<<endl;
    cout<<gcd(a,b);
    return 0;
}