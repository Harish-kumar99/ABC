#include<iostream>
#include<string>
using namespace std;
int main(){
	class student {
		public:
		int id;
		string name;
	};
	student s1;
	s1.id=1;
	s1.name="hey";
	cout<<s1.id;
	cout<<s1.name;
	return 0; }