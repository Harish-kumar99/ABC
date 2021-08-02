#include<iostream>
using namespace std;
// hybrid inheritance 
class A {
	public :
	int x;};
	
class B: public A{
	public:
	B(){
		x=10;
	}};
class C {
	public:
	int y;
	C(){
		y=20;}};
			
class D :public B,public C{
	
	public:
	void sum(){
		cout<<" sum is  : "<<x+y<<endl;}};
	
	
	
	
	
int main(){
	D d1;
	d1.sum();
	
	
	
	
	
	return 0;
	
	
	
}