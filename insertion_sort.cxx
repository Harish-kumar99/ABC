
#include<iostream>
using namespace std;
void swap(int* x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;}
	
void insert(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<(size);j++){
			if(arr[j]<arr[i]){
				swap(&arr[j],&arr[i]);		
				}}}
	for(int k=0;k<size;k++){
		cout<<arr[k]<<",";}}
		
			
					
int main(){
	int arr[5]={5,4,3,2,1};
	insert(arr,5);
	return 0;}
					