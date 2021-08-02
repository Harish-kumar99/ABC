#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	char arr[n];
	cin>>arr;
	
	bool check=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			cout<<" not palindrom ";
			check=1;
			break ; } }
	if(!check){
		cout<<"palindrome";}
	
	
	
	
	return 0;
	
	
	
}