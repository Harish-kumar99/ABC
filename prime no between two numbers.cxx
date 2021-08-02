#include<iostream>
using namespace std;

void isprime(int n){
		
		int flag=0,i;
		for(i=2 ; i<n;i++){
			if(n%i==0){
				flag=1;
			}
		}
		if(!flag){
			cout<<i<<" is prime"<<endl; }		
		
	}


int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<b;i++){
		isprime(i);}

	
	
	return 0;
	
	
	
}