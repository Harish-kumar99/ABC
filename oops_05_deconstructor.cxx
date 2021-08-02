#include<iostream>
#include<string>
using namespace std;
int main(){
	
	class student {
		public:
		
		
		int id ;
		string name;
		student(){
			cout<<"constructor ";}
		~student(){
			cout<<"deconstructor";}	
	};
	student s1;
	return 0; }