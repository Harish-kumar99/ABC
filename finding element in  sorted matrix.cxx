#include<iostream>
using namespace std;



int main(){
	
	
	int n1,n2;
	cin>>n1>>n2;
	int a1[n1][n2];
	for(int i=0;i<n1;i++){
    	for(int j=0;j<n2;j++){
    		cin>>a1[i][j]; }}
    int target;
    cin>>target;		
    int r=0,c=n2-1;
    while(r<n1 and  c>=0){
    	if(a1[r][c]==target){
    		cout<<"found"<<endl;
    		return 1 ; }
    	if(a1[r][c]>target){
    		c--; }
    	else r++; }			
	
	cout<<"not found";
	
	return 0;
	
	
	
}