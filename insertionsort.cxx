
#include<iostream>
using namespace std;

	
void insert(int arr[],int size){
	for(int i=1;i<size;i++){
		
		int current = arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;}
			arr[j+1]= current;}
	for(int k=0;k<size;k++){
			cout<<arr[k]<<" ";}		
			
			}
						
int main(){
	int arr[5]={5,4,3,2,1};
	insert(arr,5);
	return 0;}
					