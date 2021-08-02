#include<iostream>
using namespace std;
void linear(int arr[],int n){
	cout<<"enter the element";
	int temp;
	cin>>temp;
	int i;
	for(i =0 ; i<n;i++){
		if(arr[i]==temp){
			cout<<"element found at "<<i;
			break;
		}}
	if(i==n){
		cout<<"not found";}}
			
int main(){
			
	int arr[5]={1,2,3,4,5};
	linear(arr,5);
	return 0;}