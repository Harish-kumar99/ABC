#include<iostream>
using namespace std;
//multi level inheritance
class A{
	protected:
	int a;
	public :
	void get_a(){
		cout<<"enter the value of a :";
		cin>>a;
		}
};
class B : public A{
	protected:
	int b;
	public :
	void get_b(){
		cout<<"enter the value of b :";
		
		cin>>b;
		
		
		}
};	
class C : public B{
	public:
	int c;
	void get_c(){
		cout<<"enter the value of c :";
		
		cin>>c;	}
	
	void display(){
		cout<<" product = "<<a*b*c;}
		
		
		};


int main(){
	C c1;
	c1.get_a();
	c1.get_b();
	c1.get_c();
	c1.display();
	
	
	
	
	return 0;
	
	
	
}