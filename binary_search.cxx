#include<iostream>
using namespace std;
void binsearch(int arr[],int n){
	cout<<"value you want to find :";
	int temp;
	cin>>temp;
	int l,r,mid;
	l=0;
	r=n-1;
	while (l<r){
		mid=(l+r)/2;
		if(arr[mid]==temp){
			cout<<mid;
			break;}
			
		if(arr[mid]>temp){
				r=mid-1;}
					
		else {
			l=mid+1;}}
					
	
	if(arr[mid]!=temp){
		cout<<"NOT FOUND";	}}
	
int main(){
	int arr[5]={10,20,30,40,50};
	binsearch(arr,5);
	return 0;}							