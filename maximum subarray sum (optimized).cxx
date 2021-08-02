#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];}
		
	int cumsum[n+1];
	cumsum[0]=0;
	int maxsum=-99999;
	for(int i=0; i<n;i++){
			cumsum[i]=cumsum[i-1]+arr[i];
	}
	for(int i=0; i<n;i++){
			int sum=0;
			for(int k=0; k<n;k++){
				sum=cumsum[i]-cumsum[k];
				maxsum=max(sum,maxsum);
			} }
			
			
		
		
	
			
		
	
	cout<<maxsum<<endl;
	
	
		
	
	
	
	return 0;
	
	
	
}