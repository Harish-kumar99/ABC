#include<iostream>
using namespace std;



void main(){
	int n ;
	int k;
	cin>>n>>k;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i]; }


	int low=0;
	int high=n-1;
	while(low<high){
		if(arr[low]+arr[high]==k){
			cout<<low<<" "<<high<<endl;
			return;}
			
		else if(arr[low]+arr[high]>k){
			high--;}
			
		else {
			low++; }
			}
		cout<<"not found"; 
		
}
		
	
				
				
				 
	

	
	
	

	
	
