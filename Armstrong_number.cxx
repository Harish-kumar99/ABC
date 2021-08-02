#include<iostream>
using namespace std;
void arms(int n){
		int real_value=n;
		int sum=0;
		int k;
		while(n>0){
			k=n%10;
			sum=sum+k*k*k;
			n=n/10;
			}
	
       if(sum==real_value){
       	cout<<" yes "; }
       else cout<<" no " <<endl;	
	
	
	
}


int main(){
	
	arms(553);

	
	
	return 0;
	
	
	
}