#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    if (n>=300&n<=460)
    {
        cout<<"you won a macbook"<<endl;
        if(n>=300&n<380){
            cout<<"Model : M1 Mac"<<endl;
        }
        else{
            cout<<"Model :M2 Mac"<<endl;
        }
    }
    else if (n>=200&n<=280)
    {
        cout<<"you won a pack of kurkure"<<endl;
        if(n>=200&n<=240){
            cout<<"Flavour : Chilli kurkure"<<endl;
        }
        else{
            cout<<"Flavour : onion kurkure"<<endl;
        }
    }
    else if(n>=1100 and n<=1500){
        cout<<"You won a cycle"<<endl;
           if(n>=1100&n<=1300){
            cout<<"Brand: Avon cycle"<<endl;
        }
        else{
            cout<<"Brand: Hero cycle"<<endl;
        }
    }
       else if(n>=50 and n<=80){
        cout<<"You won a Bike"<<endl;
           if(n>=50&n<=65){
            cout<<"Model: Bullet"<<endl;
        }
        else{
            cout<<"Model: Rajdoot"<<endl;
        }
    }
    else{
        cout<<"beter luck next time"<<endl;
    }
    return 0;
}