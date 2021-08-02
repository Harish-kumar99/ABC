#include<iostream>
#include<string>
using namespace std;
int main(){
	
	class student {
		public:
		
		
		int id ;
		string name;
		student(int i , string n){
			this->id=i;
			this->name=n;}
		void display(){
			cout<<id<<" "<<name;	}
	};
	student s1=student(1,"harish");
	s1.display();
	return 0; }