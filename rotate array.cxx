#include<iostream>
using namespace std;



int main(){
	
	
	
	int arr[5]={1,2,3,4,5};
	for(int j=0;j<5;j++){
		cout<<arr[j]<<" ";}
	cout<<endl;

	int p=5,k=0,n=5;
	while (k<p){
		int l=arr[n-1];
		for(int i =n;i>0;i--){
			arr[i]=arr[i-1];}
		arr[0]=l;
		k++;
		
			}
	
	for(int j=0;j<5;j++){
		cout<<arr[j]<<" ";}
	
	
	return 0;
	
	
	
}