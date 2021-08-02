#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={1,1,1,1,1};
	int count1=0,count2=0;
	int arr2[5];
	for(int i=0;i<5;i++){
		if(arr[i]==0){
			count1++;
			arr2[count1-1]=arr[i];}
			
		else {
			count2++;
			arr2[5-count2]=arr[i];}
			}
	for(int k=0;k<5;k++){
					cout<<arr2[k];}
	return 0;}				
					
			
			
		