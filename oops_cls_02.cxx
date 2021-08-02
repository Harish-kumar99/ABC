#include<iostream>
#include<string>
using namespace std;
int main(){
	class student {
		public:
		int id;
		string name;
		void insert(int i,string n){
			id=i;
			name=n;}
		void display(){
			cout<<id<<" "<<name;}	
	};
	student s1;
	student s2;
	s1.insert(10,"bharat");
	s2.insert(17,"harish");
	s1.display();
	s2.display();
	return 0; }