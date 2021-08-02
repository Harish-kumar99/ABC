#include<iostream>
using namespace std;
int main(){
	int arr[5] = { 2,4,7,4,2};
	for(int i=0; i<5;i++){
		for(int j=i+1;j<5;j++){
			if(arr[j]==arr[i]){
				arr[j]=-1;
				arr[i]=-1;}}}
				
				
	for(int k=0;k<5;k++){
				if(arr[k]!=-1){
					cout<<arr[k]<<"at"<<k;}}						
				
				
				
			
				
	return 0;}			
				
				
				
				
				
				