#include<iostream>
using namespace std;
int main(){
    //create
    //first way
    int arr[5];
    //second way
    int arr_b[]={1,2,3,4,5};
    //third way
    int n;
    cin>>n;
    int arr_c[n];

    //read
    //for loop using sizeof
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //update
    for(int i=0;i<s;i++){
        arr[i]+=i;
    }
    for (int i = 0; i < s; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}