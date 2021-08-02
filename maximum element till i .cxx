#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];}
	int max1=-999999;
	int k;
	cin>>k;
	for(int i =0;i<k;i++){
		max1=max(max1,arr[i]);}
	cout<<max1;	
			
		
	
	
	
	
		
	
	
	
	return 0;
	
	
	
}