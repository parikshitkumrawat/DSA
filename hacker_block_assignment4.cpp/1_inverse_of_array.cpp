#include<iostream>
using namespace std;
void invertArray(int arr[],int inv[],int n,int index){
	if(index == n)
	return;

	inv[arr[index]] = index;

	invertArray(arr , inv ,n,index + 1);
}
int main() {
	int n;
	cin>>n;
	int arr[n],inv[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	invertArray(arr,inv,n,0);
	for(int i=0;i<n;i++){
		cout<<inv[i]<<" ";
	}
	return 0;
}