#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
	int count=0;
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				count++;}}}
				return count;}
				
int fun(){
	int n=0,m=0;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
		cin>>arr1[i];}
	for(int j=0;j<m;j++){
		cin>>arr2[j];}
	memcpy(arr1 + n, arr2, m); 
	for(int k=0;k<4;k++){
		cout<<arr1[k]<<endl;
		}	
	
}

int main(){
	
	fun();

				
	return 0;}			
				
				
				
				
				
				