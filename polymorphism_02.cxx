#include<iostream>
using namespace std;
//polymorphism->compile time->operator overloading
class dist {
			
			public:
			int feet;
			dist(int n){
				feet=n;
				cout<<"value : "<<feet<<endl;}
			void operator +(){
				feet+=5;}
			
						
					
							
			void print(){
				cout<<"value : "<<feet<<endl;}	
			
};
			
			


int main(){
	dist d(9);
	+d;
	
	d.print();
	
	
	
	return 0;
	
	
	
}