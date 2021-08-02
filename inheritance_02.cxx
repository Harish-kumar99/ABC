#include<iostream>
using namespace std;
//multiple inheritance
class A{
	protected:
	int a;
	public :
	void get_a(int n){
		a=n;}
};
class B{
	protected:
	int b;
	public :
	void get_b(int n){
		b=n;}
};	
class C : public A,public B{
	public:
	
	void display(){
		cout<<" a is : "<<a<<endl;
		cout<<" b is : "<<b<<endl;}};


int main(){
	C c1;
	c1.get_a(5);
	c1.get_b(6);
	c1.display();
	
	
	
	
	return 0;
	
	
	
}