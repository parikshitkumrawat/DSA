#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //initialization
    vector<int> a;
    //update
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    //size
    cout<<a.size()<<endl;
    //capacity
    cout<<a.capacity()<<endl;
    //delete
    a.pop_back();
    //size
    cout<<a.size()<<endl;
    //capacity
    cout<<a.capacity()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //first element
    cout<<a.front()<<endl;
    //last element
    cout<<a.back()<<endl;

    

    //inserting number between array
    a.insert(a.begin()+a.size()/2,6);
       for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    //reverse
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    //sort
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}    