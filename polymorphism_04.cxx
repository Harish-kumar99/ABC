#include<iostream>
using namespace std;
//polymorphism->virtual functuon
class base{
			public:
			void virtual  show_val(){
				cout<<"class::base"<<endl;
			}
};
			
class child : public base{
	public:
	void show_val(){
		cout<<"class::child"<<endl;}
		
	
	 
	  
	    };			


int main(){
	base* b;
	child c;
	b=&c;
	b->show_val();
	
	
	
	
	
	
	
	
	return 0;
	
	
	
}