#include<iostream>
using namespace std;
//polymorphism->run time->function_overriding
class base{
			public:
			void show_val(){
				cout<<"class::base"<<endl;
			}
};
			
class child : public base{
	public:
	void show_val(){
		cout<<"class::child"<<endl;}
		
	
	 
	  
	    };			


int main(){
	base b;
	child c;
	b.show_val();
	c.show_val();
	
	
	
	
	
	return 0;
	
	
	
}