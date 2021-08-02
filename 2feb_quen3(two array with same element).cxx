#include<iostream>
using namespace std;

//finction to check duplicate
int duplicate(int arr[],int n){
	int count=0;
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				count++;}}}
				return count;}
//function for inputs																						
int fun(){
	int n=0,m=0;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
		cin>>arr1[i];}
	for(int j=0;j<m;j++){
		cin>>arr2[j];}
//concatenating arrys to big one
     int arr[m + n];
    for (int i = 0; i <(m + n); i++) {
        if (i < n) {
            arr[i] = arr1[i];
        }
        else {
            arr[i] = arr2[i - n];
        }
    }
    return duplicate(arr,n+m);
    
    
 
    }	
 

int main(){
	
	cout<<fun();

				
	return 0;}			
				
				
				
				
				
				