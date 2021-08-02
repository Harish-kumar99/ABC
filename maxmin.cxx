#include<iostream>
using namespace std;


void myfun(int arr[] , int n) {
    	int res=0,res1=arr[0];
    	for(int i=0;i<n;i++){
    		res=max(res,arr[i]);
    		res1=min(res1,arr[i]);
    	
    	
    	}
    	cout<<res<<endl<<res1;}

int main(){ 
    
    		
	int arr[7]= { 52,-3,6,4,5,9,1};
	myfun(arr,7);
	return 0;
	
}


