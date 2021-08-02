#include<iostream>
using namespace std ;
int main(){
	int arr[5] = {1,2,3,4,5},sod=0,sev=0,result=0;
	for(int i= 0; i<5;i++){
		if(i%2==0){
			sev=sev+arr[i];}
			
		else {
			sod=sod+arr[i] ;
		}
	}
	result=sev-sod;
	cout<<result;
	return 0;
}
		
