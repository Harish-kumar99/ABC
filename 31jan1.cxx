#include<iostream>
using namespace std;
void swap(int* x ,int* y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;}
	
	
int main(){
	int arr[6]={9,3,6,5,4,1};
	for(int i=0;i<6;i=i+2){
		swap(&arr[i],&arr[i+1]);}
	for(int j=0;j<6;j++){
		cout<<arr[j]<<endl;}	
		
		return 0;}
		