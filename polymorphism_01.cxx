#include<iostream>
using namespace std;
//polymorphism->compile time->function overloading
class add {
	public:
	void sum(int a,int b){
		
		cout<<" sum is : "<<a+b<<endl;}
	void sum(int a,int b,int c){
			
			cout<<" sum is : "<<a+b+c<<endl;}};
			
			


int main(){
	add s;
	s.sum(2,3);
	s.sum(2,3,4);
	
	
	
	return 0;
	
	
	
}