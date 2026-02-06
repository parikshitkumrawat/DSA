#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i)/2;j++){
            cout<< "   ";
         }
           for(int j=1;j<=i+1;j++){
            if(j%2==0){
               cout<<"0"; 
            }
            else{
                cout<<"1";
            }
         }
        cout<< endl;
    }    
       /*for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<< " ";
         }
           for(int j=i;j<=n-2;j++){
            if(j%2==0){
               cout<<"1"; 
            }
            else{
                cout<<"0";
            }
         }
        cout<< endl;
    } */
} 