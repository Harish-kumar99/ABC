#include<iostream>
using namespace std;

int main(){
	int arr[8]={1,2,3,3,3,3,3,5};
	int ele=3;
	int l=0,r=7,mid,start=-1,end=-1;
	
	//first element
	while(l<=r){
		mid= l + (r-l)/2 ;
		if(mid>0 && arr[mid]==ele && arr[mid-1]!=ele){
			start=mid;
			break ;}
		if(arr[mid]>=ele){
			r=mid-1;}
		else l=mid+1;}
		
		
	if(start!=-1){
		cout<<start;}	
						
	//last elemnt
	l=0;
	r=7;
	end=-1;
		
	while(l<=r){
		
		mid= l + (r-l)/2 ;
		if(mid<7 && arr[mid]==ele && arr[mid+1]!=ele){
			end=mid;
	    	break ;}
		if(arr[mid]<=ele){
			l=mid+1;}
		else r=mid-1;}	
					
	cout<<" ";		
		
	if(end!=-1){
		cout<<end;}	
	
	return 0;
	
	
	
}