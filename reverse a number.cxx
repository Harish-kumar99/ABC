#include<iostream>
using namespace std;
void reverse(int n){
		
		int num=0;
		int k;
		while(n>0){
			k=n%10;
			num=num*10+k;
			n=n/10;
			}
	
       cout<<num<<endl;
	
	
	
}


int main(){
	
	reverse(12345678);

	
	
	return 0;
	
	
	
}