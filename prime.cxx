#include<iostream>
using namespace std;

void isprime(int n){
		
		int flag=0;
		for(int i=2 ; i<n;i++){
			if(n%i==0){
				flag=1;
    			cout<<"not prime"<<endl;}
		}
		if(!flag){
			cout<<" prime"<<endl; }		
		
	}

int main(){
	isprime(4);
	isprime(5);

	
	
	
	return 0;
	
	
	
}