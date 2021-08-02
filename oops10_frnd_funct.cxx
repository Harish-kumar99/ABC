#include<iostream>
//accessing private member from outside with the help of frnd funvtion
using namespace std;
class myobject {
	private :
	int member;
	public:
	
	myobject(){
		member=0;}
	void display(){
		cout<<"member : "<<member<<endl;}
		
	friend void addvalue(myobject &m);
		
};
void addvalue(myobject &m){
	m.member=m.member+5;}
	
int main(){
	myobject s1;
	s1.display();
	addvalue(s1);
	s1.display();
	return 0;}