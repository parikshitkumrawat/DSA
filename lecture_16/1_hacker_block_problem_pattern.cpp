#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        //outer space
        for(int j=i;j<=n-i;j++){
            cout<<"  ";
        }
        //left side upper number
        for(int j=i;j>=1;j--){
            cout<<j;
        }


         //center space 
         for(int j=0;j<=2*i-3;j++){
            cout<<"   ";
         }
         
        //right side upper number
        for(int j=1;j<=i;j++){
            if(i==1){
                cout<<" ";
            }
            else{
            cout<<j;
            }
        }
        cout<<endl; 
    }
   
}