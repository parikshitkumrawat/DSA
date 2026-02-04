#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    if (n>=300&n<=460)
    {
        cout<<"macbook"<<endl;
    }
    else if (n>=200&n<=300)
    {
        cout<<"kurkure"<<endl;
    }
    else if(n>=1100 and n<=1500){
        cout<<"cycle"<<endl;
    }
      else if(n>=50 and n<=80){
        cout<<"Bike"<<endl;
    }
    else{
        cout<<"beter luck next time"<<endl;
    }
    return 0;
}