#include<iostream>
using namespace std;
void feb(int n){
	int t0=0,t1=1;
	int next;
	for(int i=1;i<=n;i++){
		
		cout<<t0<<endl;
		next=t0+t1;
		t0=t1;
		t1=next;}
			
			
		}


int main(){
	feb(6);
	
	
	
	
	return 0;
	
	
	
}