#include<iostream>
#define n 100

using namespace std;
class stack{
	int* arr;
	int top;
	public:
	stack(){
		arr = new int[n];
		top=-1;}
	
	void push(int x){
		if(top==n-1){
			cout<<"overflow"<<endl;
			return;}
		top++;
		arr[top]=x;}
			
	void pop(){
		if(top==-1){
			cout<<"no element to pop"<<endl;
			return;}
			

		top=top-1;}
			
	bool isempty(){
		if(top==-1){
			
			
			return true;}
		else {
			
			
			return false;
			 }
		cout<<endl;	 
	}
	
			
		
	void tope(){
		if(top==-1) {
			cout<<"already empty"<<endl;
			return ;}
		cout<<arr[top]<<endl;}	
		
			
	
	};



int main(){
	stack s1;
	s1.pop();
	s1.tope();
	cout<<s1.isempty()<<endl;
	s1.push(5);
	s1.tope();
	s1.pop();
	cout<<s1.isempty()<<endl;
	s1.push(9);
	s1.tope();
	cout<<s1.isempty();
	
	
	
	return 0;}
	