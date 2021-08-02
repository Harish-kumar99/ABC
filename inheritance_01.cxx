#include<iostream>
using namespace std;
//single inheritance
class parent{
	public:
	parent(){
		cout<<"this is a parent class"<<endl;}
};
class child : public parent {
	public:
	child(){
		cout<<"this is a child class"<<endl;}
};



int main(){
	child c1;
	
	
	
	
	return 0;
	
	
	
}