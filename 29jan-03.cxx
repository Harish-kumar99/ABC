#include<iostream>
using namespace std;
int main(){
	int arr[9] = { 6,4,5,4,5,3,4,5,2},j=0,count=0;
	
	cout<<"enter the element : "<<endl;
	cin>>j;
	
	for(int i =0;i<9;i++){
		if(arr[i]==j){
			count=count+1;}}
	if(count==0){
			return -1;}
	else {
		cout<<count; }			
	
	return 0;
		
			
			
	
	
}
	
	
	
