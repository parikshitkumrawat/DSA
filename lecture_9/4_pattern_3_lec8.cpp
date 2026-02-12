#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){
        //left spaces
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        //stars
        for(int j=2;j<=2*i;j++){
            cout<<" * ";
        }
        //right spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        //left spaces
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        //star
        for(int j=2;j<=2*i;j++){
            cout<<" * ";
        }
        //right spaces
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        cout<<endl;
    }
    return 0;
}