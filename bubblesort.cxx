
#include<iostream>
using namespace std;
void swap(int* x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;}
	
void bubble(int arr[],int size){
	for(int i=1;i<size;i++){
		for(int j=0;j<(size-i);j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);		
				}}}
	for(int k=0;k<size;k++){
		cout<<arr[k]<<",";}}	
int main(){
	int arr[5]={5,4,3,2,1};
	bubble(arr,5);
	return 0;}
					