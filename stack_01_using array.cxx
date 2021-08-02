#include<iostream>
//stack using array
using namespace std;
#define MAX 10
class stack{
	int top;
	public:
	int a[MAX];
	stack (){ top=-1;}
	bool push (int x);
	int pop();
	int peak();
	bool isempty();
		
};
bool stack::isempty(){
	if(top<0){
		cout<<"empty";
		return true ;}}
bool stack::push (int x) {
	if(top>=(MAX-1)){
		cout<<"stack full";
		return false;}
	else {
		
		a[top+1] =x;
		top++;
		cout<<"sucess : "<<x<<endl;
	    return true ;}}	
int stack::pop(){
	if(top==-1){
		cout<<"stack is empty";
		return 0;}
	else {
			
			int x = a[top];
			top--;
			cout<<"removed : "<<x<<endl;
			return x;}}
int stack::peak(){
	if(top==-1){
		cout<<"empty stack"<<endl;}
	else {
		int x= a[top];
		cout<<"peak is : " <<x<<" at "<<top<<endl;
		return x;}	}
						
												
																
																
																
																
																
											
int main(){
	class stack s;
	s.push(7);
	s.push(8);
	s.push(9);
	s.pop();
	s.peak();
	return 0;}