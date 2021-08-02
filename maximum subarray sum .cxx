#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];}
		
		
		
		
	int maxsum=-99999;
		
	for(int i =0;i<n;i++){
			for(int j=0;j<n;j++){
				int sum=0;
				for(int k=i; k<=j ;k++){
					sum=sum+arr[k];
					}
				maxsum=max(sum,maxsum);
					 }
					 
					 }
			
		
	
	cout<<maxsum<<endl;
	
	
		
	
	
	
	return 0;
	
	
	
}